/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:37:55 by amoubare          #+#    #+#             */
/*   Updated: 2021/11/12 05:05:44 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (d > s)
	{
		while (n >= 1)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
		return (d);
	}
	while (i < n && (d || s))
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
