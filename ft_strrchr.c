/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 04:58:43 by amoubare          #+#    #+#             */
/*   Updated: 2021/11/12 04:58:47 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len_s;

	len_s = ft_strlen(s);
	while (len_s != 0)
	{
		if (s[len_s] == (char)c)
			return ((char *)s + len_s);
		len_s--;
	}
	if (s[len_s] != (char)c)
		return (NULL);
	return ((char *)s);
}
