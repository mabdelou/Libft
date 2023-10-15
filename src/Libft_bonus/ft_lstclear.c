/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:21:18 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/12 13:03:00 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*br;

	if (lst != NULL)
	{
		while ((*lst) != NULL)
		{
			br = (*lst)->next;
			del((*lst)->content);
			free((*lst));
			(*lst) = br;
		}
	}
}
