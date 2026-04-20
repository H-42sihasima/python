/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:36:42 by sihasima          #+#    #+#             */
/*   Updated: 2026/02/16 15:49:07 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_num(int num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		count += 1;
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

static void	print_str(char *str, long nbr, int len)
{
	int	i;

	i = 1;
	while (nbr != 0)
	{
		str[len - i] = (nbr % 10) + '0';
		nbr /= 10;
		i++;
	}
	str[len] = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nbr;

	nbr = (long)n;
	len = ft_count_num(nbr);
	if (nbr == 0)
		return (ft_strdup("0"));
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	print_str(str, nbr, len);
	return (str);
}
