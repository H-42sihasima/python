/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 11:49:27 by sihasima          #+#    #+#             */
/*   Updated: 2026/02/23 16:15:00 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned long n)
{
	unsigned int	nbr;
	unsigned int	count;

	count = 0;
	nbr = (unsigned int)n;
	if (nbr >= 10)
		count += ft_putunbr(nbr / 10);
	count += ft_putchar((nbr % 10) + '0');
	return (count);
}
