/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:54:33 by sihasima          #+#    #+#             */
/*   Updated: 2026/02/14 16:43:17 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)s;
	while (word[i])
	{
		if (word[i] == (char)c)
			return (&(word[i]));
		i++;
	}
	if (word[i] == (char)c)
		return (&(word[i]));
	return (NULL);
}
