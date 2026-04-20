/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:01:01 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/20 13:20:25 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(t_node **stack_a)
{
	if (stack_a && *stack_a)
		free_stack(*stack_a);
	write (2, "Error\n", 6);
	exit(1);
}

void aff_error(char *arg)
{
	write(2, "Error\n", 6);
	exit(1);
}

// void	ft_stackadd_back(t_node **stack, t_node *new_node)
// {
// 	t_node *tmp;

// 	if (!stack || !new_node)
// 		return ;
// 	if (*stack == NULL)
// 	{
// 		*stack = new_node;
// 		return ;
// 	}
// 	tmp = *stack;
// 	while (tmp->next)
// 	{
// 		tmp = tmp->next;
// 		tmp->next = new_node;
// 	}
// }

int	has_duplicate(t_node *stack_a)
{
	t_node *first;
	t_node *comp;

	first = stack_a;
	while (first != NULL)
	{
		comp = first->next;
		while (comp != NULL)
		{
			if (first->content == comp->content)
				return (0);
			else
				comp = comp->next;
		}
		first = first->next;
	}
	return (1);
}

t_node	*parse_input(int argc, char **argv)
{
	t_node *stack_a;
	t_node	*stack_b;
	int i;
	int *value;

	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	while (i < argc)
	{
		if (!ft_check_arg(argc, argv[i]))
			error_exit(&stack_a);
		value[i] = ft_atoi(argv[i]);
		if (!ft_check_atoi(value[i]))
				error_exit(&stack_a);
		add_to_stack(&stack_a, value[i]);
		i++;
	}
	if (has_duplicate(stack_a))
		error_exit(&stack_a);
	return (stack_a);
}
