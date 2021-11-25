/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 02:50:37 by amoubare          #+#    #+#             */
/*   Updated: 2021/11/25 02:50:54 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *s, ...)
{
    va_list args;
    va_start(args,s);
    int c;
    c = 0;
    char *str;
    while(*s)
    {
        if(*s == '%')
        {
            s++;
            if (*s == 'd' || *s == 'i')
                ft_putnbr(va_arg(args, int), &c);
            else if (*s == 'c')
            {
                ft_putchar_fd(va_arg(args, int), 1);
                c++;
            }
            else if (*s == 's')
            {
                str = va_arg(args, char *);
                ft_putstr_fd(str, 1);
                if (str)
                    c += ft_strlen(str);
                else
                    c += 6;
            }
            else if (*s == 'u')
                ft_putunsigned(va_arg(args, unsigned int), &c);
            else if(*s == '%')
            {
                ft_putchar_fd(*s,1);
                c++;
            }
            else if(*s == 'X')
                ft_putnbr_hexa(va_arg(args,unsigned long long), 'X', &c);
            else if(*s == 'x')
                ft_putnbr_hexa(va_arg(args,unsigned long long), 'x', &c);
            else if(*s == 'p')
            {
                 ft_putstr_fd("0x",1);
                 c += 2;
                 ft_putnbr_hexa(va_arg(args,unsigned long long), 'x', &c);
            }
        }
        else
        {
            ft_putchar_fd(*s,1);
            c++;
        }
        s++;
    }
    va_end(args);
    return (c);
}
// int main()
// {
//     printf("\n%d\n",    printf("achraf  %x %p %% %u %s %c %d",7, ((void*)0), 1, NULL, 'c', 900));
//     printf("\n%d\n", ft_printf("achraf  %x %p %% %u %s %c %d",7, ((void*)0), 1, NULL, 'c', 900));
// }
// int main()
// {
//     printf("\n%d\n",    printf("achraf  %s", NULL));
//     printf("\n%d\n", ft_printf("achraf  %s", NULL));
// }
// int main()
// {
//     printf("\n%d\n", ft_printf("%u", -10));
//     printf("\n%d\n",    printf("%u", -10));
// }
