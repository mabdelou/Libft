/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:50:45 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/15 18:20:47 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
		return (1);
	return (0);
}
/*
int main ()
{
	int a;
	int c;
    int b = 0;
    while (b <= 127 )
    {
		c = isprint(b);
        a = ft_isprint(b);
		printf("the ascii adress is :%d  AND VALUS IS :%d \n",b,c);
        printf("the ascii adress is :%d  AND VALUS IS :%d \n",b,a);
        b++;
    }
}
*/
