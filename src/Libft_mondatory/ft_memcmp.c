/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mencmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:27:01 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/15 18:48:15 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"

int	ft_memcmp(const void *st1, const void *st2, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			a;	

	a = 0;
	str1 = (unsigned char *)st1;
	str2 = (unsigned char *)st2;
	if (len == 0)
		return (0);
	while ((str1[a] == str2[a]) && (a < len - 1))
		a++;
	return (str1[a] - str2[a]);
}
/*
int main ()
{
	int a;
	int b;
	char aa[] = "hello";
	char bb[] = "hello";
	char cc[] = "hello";
	char dd[] = "hello";
	a = ft_memcmp(aa,bb,5);
	b = memcmp(cc,dd,5);
	printf("mine %d\norig %d\n",a,b);
}
*/
