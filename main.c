/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 15:49:20 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/17 16:48:28 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	/*le parsing et autre...*/

	/*choix de la strategie de tri*/

	/*liberer le stack*/
	t_config *config;
	t_node 	**a;
	t_node	**stack_a;
	t_node	*stack_b;
	int		disorder;

	if (argc < 2)
		return (0);
	stack_a = parse_input(argc, argv);
	if (!stack_a)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (!is_sorted(stack_a))
	{
		init_config(config);
		chose_method(argc, argv, config);
		strategy(argc, argv, config);
	}
	free_stack(&stack_a);
	free_stack(&stack_b);
}
