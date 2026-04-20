/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:09:53 by sihasima          #+#    #+#             */
/*   Updated: 2026/02/16 12:08:40 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*copy_dest;
	unsigned char	*copy_src;
	size_t			i;

	copy_dest = (unsigned char *)dest;
	copy_src = (unsigned char *)src;
	i = 0;
	if (copy_dest > copy_src)
	{
		while (n)
		{
			copy_dest[n - 1] = copy_src[n - 1];
			n--;
		}
	}
	else
	{
		ft_memcpy(copy_dest, copy_src, n);
	}
	dest = (void *)copy_dest;
	return (dest);
}
