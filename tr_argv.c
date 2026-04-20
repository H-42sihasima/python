/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tr_argv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 13:34:03 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/11 13:33:26 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*char * est un espace , avec int c = ' '(espace) */
static int	ft_count_words(char *argv, int c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (argv[i])
	{
		if (argv[i] != c && ((argv[i + 1] == c) || argv[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

int	count_argv(int argc, char **argv, int c)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (i < argc)
	{
		count += ft_count_words(argv[i], c);
		i++;
	}
	return (count);
}

static char	**transf(int argc, char **tab, char **argv)
{
	int		k;
	int		i;
	int		j;
	char	**tmp;

	i = 1;
	j = 0;
	while (i < argc)
	{
		tmp = ft_split(argv[i], ' ');
		if (!tmp)
			return (NULL);
		k = 0;
		while (tmp[k])
		{
			tab[j] = tmp[k];
			j++;
			k++;
		}
		free(tmp);
		i++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_argv_to_tab(int argc, char **argv, int c)
{
	int		len;
	char	**tab;

	if (argc < 2)
		return (NULL);
	len = count_argv(argc, argv, c);
	tab = (char **)malloc(sizeof(char *) * (len + 1));
	if (!tab)
		return (NULL);
	return (transf(argc, tab, argv));
}
