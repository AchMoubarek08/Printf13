/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 23:37:29 by amoubare          #+#    #+#             */
/*   Updated: 2021/11/12 05:03:32 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		j;
	size_t	lend;
	size_t	lens;

	i = 0;
	j = 0;
	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	while (dst[i])
		i++;
	if (size > 0)
	{
		while (src[j] && i < size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (size < lend)
		return (size + lens);
	return (lend + lens);
}
