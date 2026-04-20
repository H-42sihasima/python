/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:56:57 by sihasima          #+#    #+#             */
/*   Updated: 2026/02/14 16:46:08 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*word;
	int		n;

	word = (char *)s;
	n = ft_strlen(word);
	while (n >= 0)
	{
		if (word[n] != (char)c)
			n--;
		else
			return (word + n);
	}
	return (NULL);
}
