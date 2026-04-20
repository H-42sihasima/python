/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 13:21:56 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/03 11:38:27 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);
int				ft_putchar(char c);
int				ft_putnbr(int n);
int				ft_putstr(const char *s);
int				ft_putptr(void *ptr);
int				ft_putunbr(unsigned long n);
size_t			ft_strlen(const char *str);
int				ft_putnbr_base(unsigned int nbr, char *base);

#endif
