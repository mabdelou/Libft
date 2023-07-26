/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:35:07 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/12 12:52:54 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ar;

	ar = *lst;
	if (*lst != NULL)
	{
		while (ar->next != NULL)
			ar = ar->next;
		ar->next = new;
	}
	else
		*lst = new;
}
