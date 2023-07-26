/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:52:24 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/16 14:15:17 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
char	f(unsigned int a, char c)
{
	a = 10;
	if (c == '0')
		c = '1';
	return (c);
}

int main ()
{
    char *a;
    
    a = "0101010111101010100010100010101 ";
	ft_striteri(NULL, NULL);
}
*/
