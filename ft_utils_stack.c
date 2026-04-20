/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 17:08:14 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/14 12:09:30 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_node **stack, t_node *new)
{
	t_node	*ptr;

	if (!new || !stack)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	ptr = ft_lstlast(*stack);
	ptr->next = new;
}

void	ft_lstclear(t_node **stack)
{
	t_node	*tmp;

	if (!stack)
		return ;
	tmp = *stack;
	while (tmp != NULL)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

t_node	*ft_lstlast(t_node *stack_a)
{
	t_node	*tmp;

	if (!stack_a)
		return (NULL);
	tmp = stack_a;
	while (tmp != NULL)
	{
		if (tmp->next == NULL)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}

t_node	*ft_lstnew(int content)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

int	ft_lstsize(t_node *stack_a)
{
	t_node	*ptr;
	int		count;

	ptr = stack_a;
	count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
