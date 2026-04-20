/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:10:54 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/13 14:22:10 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_config(t_config *config)
{
	ft_memset(config, 0, sizeof(t_config));
	config->strat = STRAT_ADAPTIVE;
	config->bench_mode = 0;
}
