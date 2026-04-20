/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compute_disorder.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 11:04:10 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/17 15:32:07 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float	compute_disorder(t_node *stack_a)
{
	t_node	*current;
	t_node	*tmp;
	int		mistakes;
	int		total_pairs;

	if (!stack_a || !stack_a->next)
		return (0);
	current = stack_a;
	mistakes = 0;
	total_pairs = 0;
	while (current)
	{
		tmp = current->next;
		while (tmp)
		{
			total_pairs += 1;
			if (current->content > tmp->content)
				mistakes += 1;
			tmp = tmp->next;
		}
		current = current->next;
	}
	if ((float)total_pairs == 0.0)
		return (0.0);
	return (((float)mistakes / (float)total_pairs));
}

void	aff_disorder(t_node *stack_a, int fd)
{
	int		number;
	int 	fractional;
	float	n;

	n = compute_disorder(stack_a) * 100;
	number = (int)n;
	ft_putnbr_fd(number, fd);
	ft_putchar_fd('.', fd);
	fractional = (int)(n * 100) % 100;
	if (fractional < 10)
		ft_putchar_fd('0', fd);
	ft_putnbr_fd(fractional, fd);
	ft_putstr_fd("%%", fd);
}

