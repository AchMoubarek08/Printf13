/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 05:04:29 by amoubare          #+#    #+#             */
/*   Updated: 2021/11/12 05:04:32 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long				i;
	long				a;
	unsigned long long	k;

	k = 0;
	a = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' )
	{			
		a = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		k = k * 10 + str[i++] - '0';
		if (k > LLONG_MAX && a == 1)
			return (-1);
		else if (k > LLONG_MAX && a == -1)
			return (0);
	}
	return (a * (int)k);
}
