/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:43:28 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/16 10:23:44 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"

static	void	print_str(char a, int fd)
{
	write(fd, &a, 1);
}

void	ft_putendl_fd(char *s, int fd)
{
	int	b;

	b = 0;
	if (s != NULL)
	{
		while (s[b] != '\0')
		{
			print_str(s[b], fd);
			b++;
		}
		write(fd, "\n", 1);
	}
}
