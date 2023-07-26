/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:57:16 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/16 00:33:23 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int a, size_t b )
{
	unsigned char	*str;
	unsigned int	i;
	unsigned char	c;

	str = (unsigned char *)s;
	i = 0;
	c = (unsigned char)a;
	while (i < b)
	{
		if (str[i] == c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
/*
int main ()
{
    char *a;
	char b[] = "3684641315464874164113134v54152";
	int c = 0;
	while(c < 27)
	{
    	a = ft_memchr(b,118,c);
    	printf("%s\n",a);
    	a = memchr(b,118,c);
    	printf("%s\n",a);
		c++;
	}
}
*/
