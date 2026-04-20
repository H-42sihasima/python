/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 14:02:34 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/14 14:46:17 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push(t_node **a, t_node **b)
{
	t_node	*tmp;

	if (!a || !*a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	(*b) = tmp;
}

void	pa(t_node **stack_b, t_node **stack_a, t_config *config)
{
	ft_push(stack_b, stack_a);
	write (1, "pa\n", 3);
	if (config && config->bench_mode == 1)
	{
		config->count_pa++;
		config->total_op++;
	}
}

void	pb(t_node **stack_a, t_node **stack_b, t_config *config)
{
	ft_push(stack_a, stack_b);
	write (1, "pb\n", 3);
	if (config && config->bench_mode == 1)
	{
		config->count_pb++;
		config->total_op++;
	}
}
