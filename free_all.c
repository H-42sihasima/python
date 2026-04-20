/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:36:03 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/15 11:11:21 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(t_node **stack_a, t_node **stack_b, char **argv)
{
	if (stack_a && *stack_a)
		free(stack_a);
	if (stack_b && *stack_b)
		free(stack_b);
	exit(1);
}
