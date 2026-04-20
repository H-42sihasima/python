/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 13:34:18 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/20 14:07:21 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_digit(char *arg)
{
	int	i;

	if (!arg)
		aff_error(arg);
	i = 0;
	// while (arg[i] == ' ')
	// 	i++;
	if (arg[i] == '-' || arg[i] == '+')
	{
		if ((arg[i + 1] >= '0' && arg[i + 1] <= '9'))
			i++;
		else
			aff_error(arg);
	}
	while (arg[i])
	{
		if (!((arg[i] >= '0' && arg[i] <= '9')))
			aff_error(arg);
		i++;
	}
	return (1);
}

int ft_check_arg(int argc, char **arg)
{
	int i;

	i = 1;
	while (i < argc )
	{
		if (ft_check_digit(arg[i]))
			i++;
		else if (ft_strcmp(arg[i], "--simple") == 0)
			i++;
		else if (ft_strcmp(arg[i], "--medium") == 0)
			i++;
		else if (ft_strcmp(arg[i], "--complex") == 0)
			i++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	printf("%d", ft_check_arg(argc, argv));
// 	return (0);
// }

long long	ft_atoi(char *arg)
{
	int			i;
	int			sign;
	long long	res;

	sign = 1;
	res = 0;
	i = 0;
	if (!arg)
		aff_error(arg);
	if (!ft_check_digit(arg))
		aff_error(arg);
	while ((arg[i] >= '\t' && arg[i] <= '\r') || (arg[i] == ' '))
		i++;
	if ((arg[i] == '-') || (arg[i] == '+'))
	{
		if (arg[i] == '-')
			sign = -sign;
		i++;
	}
	while ((arg[i] >= '0' && arg[i] <= '9'))
	{
		res = (res * 10) + ((long)arg[i] - '0');
		i++;
	}
	return (res * sign);
}

int	ft_check_atoi(long long arg)
{
	int	number;

	if (!(arg <= 2147483647 && arg >= -2147483648))
	{
		write (2, "Error\n", 6);
		exit(1);
	}
	else
		number = arg;
	return (number);
}

/*len_int = count_argv(argc, argv, ' ')*/
int	ft_check_doublons(int *arg, int len_int)
{
	int	i;
	int	j;

	i = 0;
	while (i < len_int)
	{
		j = i + 1;
		while (j < len_int)
		{
			if (arg[i] == arg[j])
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
	return (1);
}
