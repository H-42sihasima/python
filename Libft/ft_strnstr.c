/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 09:01:15 by sihasima          #+#    #+#             */
/*   Updated: 2026/02/16 15:06:39 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*str;
	char	*find;
	size_t	i;
	size_t	j;

	str = (char *)big;
	find = (char *)little;
	if (find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (find[j] != '\0' && str[i + j] == find[j] && i + j < len)
			j++;
		if (find[j] == '\0')
			return (&(str[i]));
		i++;
	}
	return (NULL);
}
