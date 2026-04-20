/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:40:27 by sihasima          #+#    #+#             */
/*   Updated: 2026/01/23 16:16:18 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*nw1;
	unsigned char	*nw2;
	size_t			i;

	nw1 = (unsigned char *)s1;
	nw2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (nw1[i] != nw2[i])
			return (nw1[i] - nw2[i]);
		i++;
	}
	return (0);
}
