/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logique__rra.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 13:29:39 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/15 08:57:09 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_node	*ft_av_last(t_node *stack)
{
	t_node	*tmp;

	if (!stack)
		return (NULL);
	tmp = stack;
	while (tmp->next->next)
		tmp = tmp->next;
	return (tmp);
}

static void	ft_logique_reverse_rotate(t_node **stack)
{
	t_node	*first;
	t_node	*nw_first;
	t_node	*av_last;

	if (!stack || !*stack || (!(*stack)->next))
		return ;
	first = *stack;
	nw_first = ft_lstlast(*stack);
	av_last = ft_av_last(*stack);
	av_last->next = NULL;
	nw_first->next = first;
	*stack = nw_first;
}

void	rra(t_node **stack_a, t_config *config)
{
	ft_logique_reverse_rotate(stack_a);
	write(1, "rra\n", 4);
	if (config && config->bench_mode == 1)
	{
		config->count_rra++;
		config->total_op++;
	}
}

void	rrb(t_node **stack_b, t_config *config)
{
	ft_logique_reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
	if (config && config->bench_mode == 1)
	{
		config->count_rrb++;
		config->total_op++;
	}
}

void	rrr(t_node **stack_a, t_node **stack_b, t_config *config)
{
	ft_logique_reverse_rotate(stack_a);
	ft_logique_reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
	if (config && config->bench_mode == 1)
	{
		config->count_rrr++;
		config->total_op++;
	}
}
