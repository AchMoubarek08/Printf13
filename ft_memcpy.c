/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 05:02:32 by amoubare          #+#    #+#             */
/*   Updated: 2021/11/12 05:02:36 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*sc;
	unsigned char		*dt;

	i = 0;
	sc = (const unsigned char *)src;
	dt = (unsigned char *)dest;
	if (src == dest)
		return (dest);
	if (src == NULL && dest == NULL)
		return (NULL);
	while (i < n)
	{
		dt[i] = sc[i];
		i++;
	}
	return (dest);
}
