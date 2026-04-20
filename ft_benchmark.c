/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_benchmark.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 09:52:24 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/16 17:00:12 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	aff_op(t_config *config)
{
	ft_printf("[bench] sa: %d sb: %d ss: %d pa: %d pb: %d\n",config->count_sa, config->count_sb, config->count_ss, config->count_pa, config->count_pb);
	ft_printf("[bench] ra: %d rb: %d rr: %d rra: %d rrb: %d, rrr: %d\n",config->count_ra, config->count_rb, config->count_rr, config->count_rra, config->count_rrb,config->count_rrr);
}

void aff_bench(t_node *stack_a, t_config *config)
{
	ft_putstr_fd("[bench] disorder: ", 1);
	aff_disorder(stack_a, 1);
	ft_putstr_fd("\n[bench] strategy: ", 1);
	aff_strategy(stack_a, config);
	ft_printf("\ntotal_op: %d", config->total_op);
	ft_putstr_fd("\n", 1);
	aff_op(config);
}



