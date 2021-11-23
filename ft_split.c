/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:50:38 by amoubare          #+#    #+#             */
/*   Updated: 2021/11/12 21:50:43 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countword(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static char	*allocwords(char const *s, char c, int i)
{
	int		j;
	char	*str;

	j = i;
	while (s[j] != c && s[j])
	{
		j++;
	}
	str = malloc(sizeof(char) * j + 1);
	if (str == NULL)
		return (0);
	j = 0;
	while (s[i] && s[i] != c)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	if (!s)
		return (0);
	str = malloc(sizeof(char *) * (countword(s, c) + 1));
	if (str == NULL)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
		{
			str[j] = allocwords(s, c, i);
			j++;
		}
		i++;
	}
	str[j] = NULL;
	return (str);
}
