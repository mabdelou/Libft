/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:32:34 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/16 00:51:49 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"

size_t	ft_strlcpy(char	*dest,	const char	*src,	size_t size)
{
	size_t	i;
	size_t	a;

	a = 0;
	while (src[a])
		a++;
	i = 0;
	if (size == 0)
		return (a);
	while (src[i] != '\0' && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (a);
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
    
    aa = (int)strlcpy(a,b,6);
    bb = (int)ft_strlcpy(c,d,6);
    printf("or %d =  %s\n",aa, a);
    printf("me %d =  %s\n",bb, c);
 
 }
*/
