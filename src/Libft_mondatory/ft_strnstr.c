/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:27:24 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/16 14:43:47 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[a] != '\0' && a < len)
	{
		b = 0;
		while ((haystack[b + a] == needle[b])
			&& (a + b) < len && needle[b] != '\0')
				b++;
		if (needle[b] == '\0')
			return ((char *)&haystack[a]);
		else
			a++;
	}
	return (0);
}
/*
int main()
{
	char arr[30] = "00101110000111";
	char brr[10] = "\0";
	char *a;
	char *b;
	
	a = strnstr(arr,brr, 16);
	b = ft_strnstr(arr, brr, 16);
	printf("%s\n",a);
	printf("%s\n",b);
}
*/
