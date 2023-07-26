/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:39:03 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/09 13:42:53 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_num(char a, int fd)
{
	write(fd, &a, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n < 0)
	{
		print_num(('-'), fd);
		n = n * -1;
		ft_putnbr_fd(n, fd);
	}
	else if (n < 10)
	{
		print_num((n + '0'), fd);
	}
	else
	{
		ft_putnbr_fd((n / 10), fd);
		print_num((n % 10 + '0'), fd);
	}
}
