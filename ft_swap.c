/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:59:11 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/14 16:54:38 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_node **stack)
{
	int	tmp;

	if (!stack || !(*stack)->next)
		return ;
	tmp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp;
}

void	sa(t_node **stack_a, t_config *config)
{
	ft_swap(stack_a);
	write (1, "sa\n", 3);
	if (config && config->bench_mode == 1)
	{
		config->count_sa++;
		config->total_op++;
	}
}

void	sb(t_node **stack_b, t_config *config)
{
	ft_swap(stack_b);
	write (1, "sb\n", 3);
	if (config && config->bench_mode == 1)
	{
		config->count_sb++;
		config->total_op++;
	}
}

void	ss(t_node **stack_a, t_node **stack_b, t_config *config)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	write (1, "ss\n", 3);
	if (config && config->bench_mode == 1)
	{
		config->count_ss++;
		config->total_op++;
	}
}
