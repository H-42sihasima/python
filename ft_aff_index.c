/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 17:20:10 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/02 13:22:46 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*ft_stack_to_array(t_node **stack_a)
{
	t_node	*current;
	int		*tab;
	int		len;
	int		i;

	if (!stack_a || !*stack_a)
		return (NULL);
	len = ft_lstsize(*stack_a);
	tab = (int *)malloc(sizeof(int) * len);
	if (!tab)
		return (NULL);
	i = 0;
	current = *stack_a;
	while (current)
	{
		tab[i] = current->content;
		i++;
		current = current->next;
	}
	return (tab);
}

static void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static void	ft_tri_tab(int *tab, int size)
{
	int	i;
	int	j;

	if (!tab || size <= 1)
		return ;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
				swap(&tab[j + 1], &tab[j]);
			j++;
		}
		i++;
	}
}

static void	ft_app_index(t_node **stack_a, int *tab, int size)
{
	t_node	*tmp;
	int		i;

	if (!stack_a || !*stack_a || !tab || size <= 0)
		return ;
	tmp = *stack_a;
	while (tmp)
	{
		i = 0;
		while (i < size)
		{
			if (tmp->content == tab[i])
			{
				tmp->index = i;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
}

void	ft_assign_indexation(t_node **stack_a)
{
	int	*tab;
	int	size;

	if (!stack_a || !*stack_a)
		return ;
	size = ft_lstsize(*stack_a);
	tab = ft_stack_to_array(stack_a);
	if (!tab)
		return ;
	ft_tri_tab(tab, size);
	ft_app_index(stack_a, tab, size);
	free(tab);
}
