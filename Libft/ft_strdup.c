/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 13:24:02 by sihasima          #+#    #+#             */
/*   Updated: 2026/02/12 16:10:45 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tab;
	char	*array;
	size_t	i;

	tab = (char *)s;
	array = (char *)malloc(sizeof(char) * (ft_strlen(tab) + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (tab[i] != '\0')
	{
		*(array + i) = *(tab + i);
		i++;
	}
	array[i] = '\0';
	return (array);
}
