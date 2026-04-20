/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_to_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 15:58:34 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/14 14:15:44 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tab_to_stack(t_node **stack, int *tab, int taille)
{
	int		i;
	t_node	*pile;

	if (!stack)
		return ;
	i = 0;
	while (i < taille)
	{
		pile = ft_lstnew(tab[i]);
		if (!pile)
		{
			ft_lstclear(stack);
			return ;
		}
		ft_lstadd_back(stack, pile);
		i++;
	}
}

t_node	*ft_stack(int argc, char **argv, t_node **stack_a)
{
	int		*tab;
	char	**array;
	int		size;
	int		i;

	if (!stack_a)
		return (NULL);
	size = count_argv(argc, argv, ' ');
	array = ft_argv_to_tab(argc, argv, ' ');
	tab = ft_tab(argc, array, size);
	i = 0;
	while (i < size)
	{
		tab_to_stack(stack_a, &tab[i], size);
		i++;
	}
	return (*stack_a);
}
