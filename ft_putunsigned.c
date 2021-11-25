/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 01:11:20 by amoubare          #+#    #+#             */
/*   Updated: 2021/11/25 01:16:14 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    ft_putunsigned(unsigned int n, int *count)
{
    if (n >= 0 && n <= 9)
	{
		ft_putchar_fd(n + '0', 1);
		*count += 1;
	}
	else
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
}

