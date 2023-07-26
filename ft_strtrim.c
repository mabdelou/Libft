/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:20:49 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/15 23:40:19 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*zero(void)
{
	char	*arr;

	arr = malloc(sizeof(char) * 1);
	if (arr == NULL)
		return (NULL);
	arr[0] = '\0';
	return (arr);
}

static	int	test(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		k;
	int		j;
	int		len;
	char	*arr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	j = 0;
	k = -1;
	while (test(s1[i], set))
		i++;
	if (i == len || j == len)
		return (zero());
	while (test(s1[len - (j + 1)], set))
		j++;
	arr = (char *)malloc(sizeof(char) * (len + 1) - (i + j));
	if (!arr)
		return (NULL);
	while ((++k) < (len - (i + j)))
	arr[k] = s1[k + i];
	arr[k] = '\0';
	return (arr);
}
/*
int main ()
{
    char *a;

    a = ft_strtrim(NULL,NULL);
    printf("%s\n",a);
}
*/
