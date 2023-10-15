/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:23:22 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/15 23:59:18 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"

int	ft_isalpha(int a)
{
	char	c;

	c = (unsigned char )a;
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
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
		printf("%d\t%d\n",a,ft_isalpha(a));
		printf("%d\t%d\n",a,ft_isalpha(a));
		a++;
	}
    return 0;
}
*/
