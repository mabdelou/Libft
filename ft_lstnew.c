/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:03:46 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/12 12:50:11 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*test;

	test = (t_list *)malloc(sizeof(t_list));
	if (test == NULL)
		return (NULL);
	test->content = content;
	test->next = NULL;
	return (test);
}
/*
int main ()
{
	char *test;

	test = "i hope see my brohter here";
	printf("%s",ft_lstnew((void *)test));
}*/
