/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adaptive.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 12:55:20 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/17 15:29:23 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_adaptive(t_node *stack_a, t_config *config)
{
	float	disorder;

	if (!stack_a || !config)
		return ;
	disorder = compute_disorder(stack_a);
	config->disorder = disorder;
	if (disorder < 0.2)
		config->strat = STRAT_SIMPLE;
	else if (0.2 <= disorder && disorder < 0.5)
		config->strat = STRAT_MEDIUM;
	else
		config->strat = STRAT_COMPLEX;
}
