/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:16:51 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/16 00:40:43 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*cpy;
	size_t			a;
	size_t			len;

	a = 0;
	len = ft_strlen(s1);
	cpy = (char *)malloc(sizeof(char) * len + 1);
	if (cpy == NULL)
		return (NULL);
	while (s1[a])
	{
		cpy[a] = s1[a];
		a++;
	}
	cpy[a] = '\0';
	return (cpy);
}
/*
int main ()
{
	printf("%s\n",ft_strdup("123456789"));
	printf("%s\n",strdup("123456789"));
}
*/
