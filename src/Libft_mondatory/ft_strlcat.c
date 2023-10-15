/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:32:55 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/16 00:51:14 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"

size_t	ft_strlcat(char	*dest, const char	*src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	c;
	size_t	d;

	a = 0;
	b = 0;
	d = 0;
	while (dest[b])
		b++;
	c = b;
	while (src[a])
		a++;
	if (c >= size)
		return (a + size);
	while (src[d] && (b + 1 < size))
	{
		dest[b] = src[d];
		b++;
		d++;
	}
	dest[b] = '\0';
	return (a + c);
}
/*
int main()
{
    char a[50] = "hello";
    char b[50] = "hello there!";
    char c[50] = "hello";
    char d[50] = "hello there!";
    int aa;
    int bb;
    
    aa = (int)strlcat(a,b,18);
    bb = (int)ft_strlcat(c,d,18);
    printf("or %d =  %s\n",aa, a);
    printf("me %d =  %s\n",bb, c);
 
 }
*/
