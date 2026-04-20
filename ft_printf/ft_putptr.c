/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 09:37:11 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/03 11:33:56 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_base_long(unsigned long long nbr, char *base)
{
	int					count;
	unsigned long long	len_base;

	count = 0;
	len_base = ft_strlen(base);
	if (nbr == 0)
		ft_putchar('0');
	if (nbr >= len_base)
	{
		count += ft_putnbr_base_long(nbr / len_base, base);
	}
	count += ft_putchar(base[nbr % len_base]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int					count;
	unsigned long long	address;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count = 0;
	address = (unsigned long long)ptr;
	count += ft_putstr("0x");
	count += ft_putnbr_base_long(address, "0123456789abcdef");
	return (count);
}
