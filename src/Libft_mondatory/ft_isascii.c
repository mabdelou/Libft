/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 07:58:39 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/16 00:32:57 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	return (0);
}

/*
int main()
{
    int a;
	int b = -1;
    int c;
    while(b < 129)
    {
	c = isascii(b);
    a = ft_isascii(b);
    printf("%d\t%d\n",a,c);
    b++;
	
    }    
}
*/
