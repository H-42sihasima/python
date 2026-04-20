/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:14:41 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/03 11:29:09 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr, char *base)
{
	unsigned int	count;

	count = 0;
	if (nbr >= 16)
		count += ft_putnbr_base(nbr / 16, base);
	count += ft_putchar(base[nbr % 16]);
	return (count);
}
