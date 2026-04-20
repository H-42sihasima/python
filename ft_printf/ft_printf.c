/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 13:38:32 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/03 11:32:19 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_format(int c, va_list ap)
{
	int	count;

	count = 0;
	if (c == '%')
		count += ft_putchar('%');
	if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(ap, int));
	if (c == 'c')
		count += ft_putchar(va_arg(ap, int));
	if (c == 's')
		count += ft_putstr(va_arg(ap, char *));
	if (c == 'x')
		count += ft_putnbr_base(va_arg(ap, int), "0123456789abcdef");
	if (c == 'X')
		count += ft_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
	if (c == 'p')
		count += ft_putptr(va_arg(ap, void *));
	if (c == 'u')
		count += ft_putunbr(va_arg(ap, unsigned long));
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		count;

	count = 0;
	va_start(ap, str);
	if (!str)
		return (-1);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_check_format(str[i], ap);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
