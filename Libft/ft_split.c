/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:09:27 by sihasima          #+#    #+#             */
/*   Updated: 2026/02/16 17:58:46 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_nb(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static size_t	ordre_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

static void	ft_fill_tab(char **tab, char const *s, char c, size_t count_word)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < count_word)
	{
		while (*s == c)
			s++;
		tab[i] = ft_substr(s, 0, ordre_len(s, c));
		if (!tab)
		{
			j = 0;
			while (j < i - 1)
			{
				free(tab[j]);
				j++;
			}
			free(tab);
			return ;
		}
		s += ordre_len(s, c);
		i++;
	}
	tab[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	nb_mots;

	if (!s)
		return (NULL);
	nb_mots = ft_count_nb(s, c);
	tab = (char **)malloc(sizeof(char *) * (nb_mots + 1));
	if (!tab)
		return (NULL);
	ft_fill_tab(tab, s, c, nb_mots);
	return (tab);
}
