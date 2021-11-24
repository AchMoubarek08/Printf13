/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:39:11 by amoubare          #+#    #+#             */
/*   Updated: 2021/11/23 16:41:13 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_ull_len(unsigned long long n)
{
    int count;

    count = 0;
    while(n / 10)
        count++;
    return (count);
}