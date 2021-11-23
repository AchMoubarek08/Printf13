/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 05:06:00 by amoubare          #+#    #+#             */
/*   Updated: 2021/11/23 19:21:20 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(unsigned long long n, int fd, char c, int *count)
{
	if (n >= 0 && n <= 9)
	{
		ft_putchar_fd(n + '0', fd);
		*count += 1;
	}
	else if (n >= 10 && n <= 15)
	{
		if (c == 'X')
			ft_putchar_fd(n + 55, fd);
		else
			ft_putchar_fd(n + 87, fd);
		*count += 1;
	}
	// else if (n < 0)
	// {
	// 	write (fd, "-", 1);
	// 	ft_putnbr_fd(n *= -1, fd, c);
	// }
	else
	{
		ft_putnbr_fd(n / 16, fd, c, count);
		ft_putnbr_fd(n % 16, fd, c, count);
	}
}
