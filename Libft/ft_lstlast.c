/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:54:15 by sihasima          #+#    #+#             */
/*   Updated: 2026/02/12 13:09:50 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	if (! lst)
		return (NULL);
	ptr = lst;
	while (ptr != NULL)
	{
		if (ptr -> next == NULL)
			return (ptr);
		ptr = ptr -> next;
	}
	return (ptr);
}
