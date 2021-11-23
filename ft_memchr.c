/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 04:57:01 by amoubare          #+#    #+#             */
/*   Updated: 2021/11/12 04:57:05 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	if (c == 0 && n == 0)
		return (NULL);
	while (n != 0)
	{
		if (str[i] == (char)c)
			return (str + i);
		n--;
		i++;
	}
	return (0);
}
