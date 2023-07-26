/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:59:40 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/15 22:35:17 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		a;
	int		size;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	size = ft_strlen(s);
	a = 0;
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	while (s[a])
	{
		str[a] = (*f)(a, s[a]);
		a++;
	}
	return (str);
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
    char *b;
   
    a = "0101010111101010100010100010101 ";
    b = ft_strmapi(NULL, NULL);
    printf("%s\n",b);
    
}
*/
