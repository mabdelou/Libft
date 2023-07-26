/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:24:16 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/15 23:50:42 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int a)
{
	if (a >= 97 && a <= 122)
	{
		a = a - 32;
		return (a);
	}
	else
	{
		return (a);
	}
}
/*
int main()
{
    int a;
	int b;
	int c;

	c = 0;
	while (c < 129)
	{
    	a = ft_toupper(c);
		b = toupper(c);
    	printf("%d\n%d\n",a,b);
		c++;
	}
}
*/
