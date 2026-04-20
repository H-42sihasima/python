/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 12:28:37 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/20 13:20:00 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
#include "ft_printf/ft_printf.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;

}t_node;

typedef enum s_stategy {
	STRAT_SIMPLE,
	STRAT_MEDIUM,
	STRAT_COMPLEX,
	STRAT_ADAPTIVE
} t_stategy;

typedef struct s_strategy {
	t_stategy 	strat; //la strategie choisie
	int			bench_mode; //1 si l'utilisateur a tape --bench, sinon 0
	double		disorder;// pour stocker le % de desordre

	/*les compteurs pour le mode --bench*/
	int		count_sa;
	int		count_sb;
	int		count_ss;
	int		count_pa;
	int		count_pb;
	int		count_ra;
	int		count_rb;
	int		count_rr;
	int		count_rra;
	int		count_rrb;
	int		count_rrr;
	int		total_op;
} t_config;

typedef struct s_data
{
	t_node *stack_a;
	t_node	*stack_b;
} t_data;


void				init_config(t_config *config);

void				ft_lstadd_back(t_node **lst, t_node *new);
void				ft_lstclear(t_node **lst);
t_node				*ft_lstlast(t_node *stack_a);
t_node				*ft_lstnew(int content);
int					ft_lstsize(t_node *stack_a);
char				**ft_split(char const *s, char c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
size_t				ft_strlen(const char *str);
char				**ft_split(char const *s, char c);
int					ft_strcmp(char *s1, char *s2);
void				ra(t_node **a, t_config *config);
void				rb(t_node **b, t_config *config);
void				rr(t_node **a, t_node **b, t_config *config);
void				pa(t_node **stack_a, t_node **stack_b, t_config *t_config);
void				pb(t_node **stack_b, t_node **stack_a, t_config *t_config);
void				sa(t_node **stack_a, t_config *config);
void				sb(t_node **stack_b, t_config *config);
void				ss(t_node **stack_a, t_node **stack_b, t_config *config);
void				rra(t_node **stack_a, t_config *config);
void				rrb(t_node **stack_b, t_config *config);
void				rrr(t_node **stack_a, t_node **stack_b, t_config *config);

int 				ft_check_arg(int argc, char **arg);
long long			ft_atoi(char *arg);
int					ft_check_atoi(long long arg);
int					ft_check_doublons(int *arg, int len_int);
char				**ft_argv_to_tab(int argc, char **argv, int c);
void				tab_to_stack(t_node **stack, int *tab, int taille);
void 				aff_error(char *arg);

int					count_argv(int argc, char **argv, int c);
t_node				*ft_stack(int argc, char **array, t_node **stack_a);

void				ft_short_simple(t_node **stack_a, t_node **stack_b, t_config *config);
int					*ft_convert_tab(int argc, char **array, int size);
int					*ft_tab(int argc, char **argv, int size);

void				ft_assign_indexation(t_node **stack_a);
int					ft_calcule_w(t_node **stack_a);
int					ft_find_min(t_node *stack_a);
void				bring_to_top(t_node **stack_a, int min_value, int index, t_config *config);
int					ft_get_index(t_node *stack_a, int value);

void				ft_push_to_b(t_node **stack_a, t_node **stack_b, int w, t_config *config);

void				ft_push_to_a(t_node **stack_b, t_node **stack_a, t_config *config);
void				ft_medium_algo(t_node **stack_a, t_node **stack_b, t_config *config);
void				sort_three(t_node **stack_a, t_config *config);

int					ft_find_max_bits(t_node **stack_a);
void				complex_algo(t_node **stack_a, t_node **stack_b, t_config *config);

float				compute_disorder(t_node *stack_a);
void				aff_disorder(t_node *stack_a, int fd);
void				ft_adaptive(t_node *stack_a, t_config *config);

t_node				*parse_input(int argc, char **argv);

int					ft_printf(const char *str, ...);
void 				aff_bench(t_node *stack_a, t_config *config);
void				chose_method(int argc, char **argv, t_config *config);
void				strategy(int argc, char **argv, t_config *config);
void				aff_strategy(t_node *stack_a, t_config *config);

#endif
