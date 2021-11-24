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

void	ft_putnbr_hexa(unsigned long long n, char c, int *count)
{
	if (n <= 9)
	{
		ft_putchar_fd(n + '0', 1);
		*count += 1;
	}
	else if (n >= 10 && n <= 15)
	{
		if (c == 'X')
			ft_putchar_fd(n + 55, 1);
		else
			ft_putchar_fd(n + 87, 1);
		*count += 1;
	}
	else
	{
		ft_putnbr_hexa(n / 16, c, count);
		ft_putnbr_hexa(n % 16, c, count);
	}
}
