/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:01:09 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/15 23:46:01 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"

int	ft_tolower(int a)
{
	if (a >= 65 && a <= 90)
	{
		a = a + 32;
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
    	a = ft_tolower(c);
		b = tolower(c);
    	printf("%d\n%d\n",a,b);
		c++;
	}
}
*/
