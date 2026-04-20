/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:43:18 by sihasima          #+#    #+#             */
/*   Updated: 2026/02/14 17:00:30 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check_in(char const *s, char const *t)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (t[j] != s[i])
		{
			if (t[j] == '\0')
				return (i);
			j++;
		}
		i++;
	}
	return (0);
}

static size_t	ft_check_end(char const *s, char const *t)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s);
	while (i > 0)
	{
		j = ft_strlen(t);
		while (s[i - 1] != t[j - 1])
		{
			if (j - 1 == 0)
				return (i - 1);
			j--;
		}
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	index;
	size_t	end_index;
	char	*nw_ch;

	if (!s1 || !set)
		return (NULL);
	if (set[0] == '\0')
		return (ft_strdup(s1));
	index = ft_check_in(s1, set);
	end_index = ft_check_end(s1, set);
	if (index == 0 && end_index == 0)
		return (ft_strdup(""));
	nw_ch = ft_substr(s1, index, (end_index - index + 1));
	return (nw_ch);
}
