/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:45:14 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/16 00:32:27 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"

void	*ft_bzero(void *st, size_t len)
{
	char	*str;
	size_t	i;
	size_t	a;

	a = 0;
	i = len;
	str = (char *)st;
	while (a < i)
	{
		str[a] = 0;
		a++;
	}
	return ((void *)str);
}
/*
int main ()
{
	char *b;
	char *c;
	char a[] = "hello there who are you ?";
	char d[] = "hello there who are you ?";
	b = ft_bzero(a,-2147483650);
	c = bzero(b,2147483650);
	printf("%s\n%s\n",a);

}*/
