/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:14:32 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/09 15:12:25 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c )
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if ((char)c == '\0')
		return ((char *)&s[i]);
	i = i - 1;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
int main()
{
    char *a;
    char *b;
    b = strrchr("ado it ahmed !",'\0');
    a = ft_strrchr("ado it ahmed !",'\0');
    printf("%s\n%s\n",a,b);

    return 0;
}
*/
