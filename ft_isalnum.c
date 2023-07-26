/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:25:47 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/15 18:02:37 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	else if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main ()
{
	int i = 0;
	while(i < 128)
	{
		printf("%d\t%d\n",i,isalnum(i));
		printf("%d\t%d\n",i,ft_isalnum(i));
		i++;
	}
}*/
