/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:27:34 by sihasima          #+#    #+#             */
/*   Updated: 2026/02/17 13:19:21 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*word;
	size_t			i;

	i = 0;
	word = (unsigned char *)s;
	while (i < n)
	{
		*(word + i) = 0;
		i++;
	}
}
