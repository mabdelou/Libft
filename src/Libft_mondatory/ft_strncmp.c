/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:43:26 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/09 14:52:33 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"

int	ft_strncmp(const char	*s1,	const char	*s2,	size_t n)
{
	size_t			b;
	unsigned char	*i;
	unsigned char	*k;

	i = (unsigned char *)s1;
	k = (unsigned char *)s2;
	b = 0;
	while ((i[b] == k[b]) && b < n && i[b])
		b++;
	if (b != n)
		return (i[b] - k[b]);
	return (0);
}
/*
int main ()
{
    
    int a;
	int b;
	b = strncmp("abcdefgh","abcdefgh",8);
    a = ft_strncmp("abcdefgh","abcdefgh",8);
    printf("%d\t%d\n",a,b);
}
*/
