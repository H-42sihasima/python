/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:22:06 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/15 08:54:49 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_logic_rotate(t_node **stack)
{
	t_node	*first;
	t_node	*nw_head;
	t_node	*last;

	if (!stack || !*stack || (!((*stack)->next)))
		return ;
	first = *stack;
	nw_head = first->next;
	last = ft_lstlast(*stack);
	*stack = nw_head;
	first->next = NULL;
	last->next = first;
}

void	ra(t_node **a, t_config *config)
{
	ft_logic_rotate(a);
	write (1, "ra\n", 3);
	if (config && config->bench_mode == 1)
	{
		config->count_ra++;
		config->total_op++;
	}
}

void	rb(t_node **b, t_config *config)
{
	ft_logic_rotate(b);
	write (1, "rb\n", 3);
	if (config && config->bench_mode == 1)
	{
		config->count_rb++;
		config->total_op++;
	}
}

void	rr(t_node **a, t_node **b, t_config *config)
{
	ft_logic_rotate(a);
	ft_logic_rotate(b);
	write (1, "rr\n", 3);
	if (config && config->bench_mode == 1)
	{
		config->count_rr++;
		config->total_op++;
	}
}
