/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex_algo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 12:29:17 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/14 15:27:09 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_max_bits(t_node **stack_a)
{
	int	size;
	int	max_index;
	int	bits;

	if (!stack_a || !*stack_a)
		return (0);
	size = ft_lstsize(*stack_a);
	max_index = size - 1;
	bits = 0;
	while (max_index >> bits != 0)
		bits++;
	return (bits);
}

static void	utils(t_node **stack_a, t_node **stack_b, int max_bits, t_config *config)
{
	int	j;
	int	i;
	int	len_stack;

	if (!stack_a || !*stack_a || !stack_b || !config)
		return ;
	i = 0;
	while (i <= max_bits)
	{
		j = 0;
		len_stack = ft_lstsize(*stack_a);
		while (j < len_stack && *stack_a)
		{
			if ((((*stack_a)->index >> i) & 1) == 0)
				pb(stack_a, stack_b, config);
			else
				ra(stack_a, config);
			j++;
		}
		while (*stack_b)
			pa(stack_b, stack_a, config);
		i++;
	}
}

void	complex_algo(t_node **stack_a, t_node **stack_b, t_config *config)
{
	int	max_bits;

	if (!stack_a || !*stack_a || !stack_b || !config)
		return ;
	max_bits = ft_find_max_bits(stack_a);
	utils(stack_a, stack_b, max_bits, config);
}
