/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:51:18 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/15 23:14:29 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *a, int b )
{
	int	i;

	i = 0;
	while (a[i])
	{	
		if (a[i] == (char)b)
			return ((char *)&a[i]);
		i++;
	}
	if ((char)b == '\0')
		return ((char *)&a[i]);
	return (0);
}
/*
int main()
{
    char *a;
//	char *b;
//	b = strchr(NULL,'?');
    a = ft_strchr(NULL,'?');
    printf("%s\n",a);
//	printf("%s\n",b);

}
*/
