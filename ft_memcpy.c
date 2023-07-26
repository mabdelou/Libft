/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:18:36 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/16 00:37:37 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			a;

	a = 0;
	if (dst != NULL || src != NULL)
	{
		s = (unsigned char *)src;
		d = (unsigned char *)dst;
		while (len)
		{
			d[a] = s[a];
			a++;
			len--;
		}
	}
	return (dst);
}
/*
int main ()
{
    char a[] = "";
    char b[50] = "";
    char *aa = ft_memcpy(a,b,0);
	printf("%s\n",aa);
}
*/
