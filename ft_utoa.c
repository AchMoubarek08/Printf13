/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 05:05:27 by amoubare          #+#    #+#             */
/*   Updated: 2021/11/12 05:05:37 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int	counter(unsigned int n)
{
	int	count;

	count = 0;
	while (n)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_utoa(unsigned int n)
{
	char	*str;
	unsigned int		i;
	unsigned int		count;

	if (n == 0)
		return (ft_strdup("0"));
	str = NULL;
	i = 0;
	count = counter(n);
	str = malloc(sizeof(char) * count + 1);
	if (str == NULL)
		return (0);
	str[count + i] = 0;
	i = count - 1 + i;
	while (n != 0)
	{
		str[i--] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}
