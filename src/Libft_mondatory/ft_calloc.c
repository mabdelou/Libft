/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:17:10 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/15 17:08:46 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t size, size_t num)
{
	void	*test;

	test = malloc(size * num);
	if (test)
		ft_memset(test, 0, size * num);
	return (test);
}
/*
int main ()
{
	char	*c;
	char	*a;
	c = (char *)calloc(0,0);
	a = (char *)ft_calloc(0,0);
	c[0] = '0';
	a[0] = '1';
	printf("%s\n",c);
	printf("%s\n",a);
}
*/
