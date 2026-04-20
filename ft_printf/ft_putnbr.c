/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:16:59 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/03 11:19:54 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nb;
	int		count;
	char	c;

	count = 0;
	nb = (long)n;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 10)
		count += ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	count += ft_putchar(c);
	return (count);
}
