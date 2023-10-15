/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:18:08 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/09 15:32:08 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"

static void	*ft_mv(char *dest, const char *srrc, size_t len)
{
	int	i;
	int	j;

	i = len - 1;
	j = 0;
	while (j < (int)len)
	{
		dest[j] = srrc[j];
		j++;
	}
	return ((void *)dest);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*srrc;
	int			i;

	srrc = src;
	dest = dst;
	i = len - 1;
	if (dest > srrc)
	{
		while (i >= 0)
		{
			dest[i] = srrc[i];
			i--;
		}
		return ((void *)dest);
	}
	if (dest < srrc)
		return (ft_mv(dest, src, len));
	if (dest == srrc)
		return ((void *)srrc);
	return (0);
}
