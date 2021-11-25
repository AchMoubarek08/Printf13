/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 05:06:00 by amoubare          #+#    #+#             */
/*   Updated: 2021/11/25 00:30:19 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count += 11;
	}
		
	else if (n >= 0 && n <= 9)
	{
		ft_putchar_fd(n + '0', 1);
		*count += 1;
	}
	else if (n < 0)
	{
		write (1, "-", 1);
		*count += 1;
		ft_putnbr(n *= -1, count);
	}
	else
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
}
// int main()
// {
// 	int a = 47816782;
// 	printf("\n%d",ft_putnbr_fd(a, 1));
// }