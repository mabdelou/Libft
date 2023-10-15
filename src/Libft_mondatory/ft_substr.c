/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:41:08 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/16 10:54:34 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"

static	char	*zero(void)
{
	char	*arr;

	arr = malloc(sizeof(char) * 1);
	if (arr == NULL)
		return (NULL);
	arr[0] = '\0';
	return (arr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*str;
	size_t	size;

	a = 0;
	if (s == NULL)
		return (NULL);
	size = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		return (zero());
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	while ((s[a] != '\0') && (a < len))
	{
		str[a] = s[start];
		start++;
		a++;
	}
	str[a] = '\0';
	return (str);
}
/*
int main ()
{
    
    char str[100] = "hello there how are you , what are you doing ";
    char *strr;
    strr = ft_substr(NULL, 2, 18);
    printf("%s\n",strr);
    
}
*/
