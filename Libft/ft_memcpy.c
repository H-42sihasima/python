/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:50:19 by sihasima          #+#    #+#             */
/*   Updated: 2026/02/16 15:52:16 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest1;
	const unsigned char	*cpy_src;

	i = 0;
	dest1 = (unsigned char *)dest;
	cpy_src = (const unsigned char *)src;
	while (i < n)
	{
		*(dest1 + i) = *(cpy_src + i);
		i++;
	}
	return (dest);
}
