/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:54:15 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/15 18:19:22 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"

int	ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main()
{
    int a = 0;
	while(a < 128)
	{
    	printf("%d\t%d\n",a,ft_isdigit(a));
		printf("%d\t%d\n",a,isdigit(a));
		a++;
	}
}
*/
