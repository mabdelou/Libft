/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:31:37 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/16 00:39:15 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *st, int a, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)st;
	i = 0;
	while (i < len)
	{
		str[i] = a;
		i++;
	}
	return (str);
}
/*
int main()
{
	char *c;
	char *d;
	char a[] = "";
  	c = memset(a,63,1);
  	d = ft_memset(a,63,1);
  	printf("%s\n",c);
	printf("%s\n",d);
   	return 0;
}
*/
