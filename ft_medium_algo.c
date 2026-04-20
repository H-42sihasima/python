/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medium_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 16:53:08 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/14 17:14:00 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_max(t_node **stack_a)
{
	t_node	*tmp;
	int		max;

	if (!stack_a || !*stack_a)
		return (0);
	tmp = (*stack_a)->next;
	max = (*stack_a)->content;
	while (tmp != NULL)
	{
		if (tmp->content > max)
			max = tmp->content;
		tmp = tmp->next;
	}
	return (max);
}

static void	ft_bring_to_top(t_node **stack_a, int valeur_max, t_config *config)
{
	int	taille;
	int	mid;
	int	index_max;

	if (!stack_a || !*stack_a || !config)
		return ;
	taille = ft_lstsize(*stack_a);
	mid = taille / 2;
	while ((*stack_a)->content != valeur_max)
	{
		index_max = ft_get_index(*stack_a, valeur_max);
		if (index_max <= mid)
			ra(stack_a, config);
		else
			rra(stack_a, config);
	}
}

void	ft_push_to_b(t_node **stack_a, t_node **stack_b, int w, t_config *config)
{
	int	i;
	int	indice;

	if (!stack_a || !*stack_a || !stack_b || !config)
		return ;
	ft_assign_indexation(stack_a);
	i = 0;
	while (ft_lstsize(*stack_a) > 3)
	{
		indice = (*stack_a)->index;
		if (indice <= i)
		{
			pb(stack_a, stack_b, config);
			i++;
			rb(stack_b, config);
		}
		else if (indice < i + w)
		{
			pb(stack_a, stack_b, config);
			i++;
		}
		else
			ra(stack_a, config);
	}
	sort_three(stack_a, config);
}

void	ft_push_to_a(t_node **stack_b, t_node **stack_a, t_config *config)
{
	int	max;

	if (!stack_b || !*stack_b || !stack_a || !config)
		return ;
	while (*stack_b)
	{
		max = ft_find_max(stack_b);
		ft_bring_to_top(stack_b, max, config);
		pa(stack_b, stack_a, config);
	}
}

void	ft_medium_algo(t_node **stack_a, t_node **stack_b, t_config *config)
{
	int	w;

	if (!stack_a || !*stack_a || !stack_b || !config)
		return ;
	w = ft_calcule_w(stack_a);
	ft_push_to_b(stack_a, stack_b, w, config);
	ft_push_to_a(stack_b, stack_a, config);
}
