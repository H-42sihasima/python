/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 09:23:00 by sihasima          #+#    #+#             */
/*   Updated: 2026/02/17 13:21:36 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*tab;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	tab = malloc((len + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	j = 0;
	while (j < len && s[i] != '\0')
	{
		tab[j] = (s[start + j]);
		j++;
	}
	tab[j] = '\0';
	return (tab);
}
