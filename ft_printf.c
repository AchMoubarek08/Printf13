
#include "libftprintf.h"

int ft_printf(const char *s, ...)
{
    va_list n;
    va_start(n,s);
    int c;
    c = 0;
    char *str;
    while(*s)
    {
        if(*s == '%')
        {
            s++;
            if (*s == 'd' || *s == 'i')
            {
                str = ft_itoa(va_arg(n, int));
                ft_putstr_fd(str, 1);
                c += ft_strlen(str);
            }
            else if (*s == 'c')
            {
                ft_putchar_fd(va_arg(n, int), 1);
                c++;
            }
            else if (*s == 's')
            {
                str = va_arg(n, char *);
                ft_putstr_fd(str, 1);
                c += ft_strlen(str);
            }
            else if (*s == 'u')
            {
                str = ft_utoa(va_arg(n,unsigned int));
                ft_putstr_fd(str, 1);
                c += ft_strlen(str);
            }
            else if(*s == '%')
            {
                ft_putchar_fd(*s,1);
                c++;
            }
            else if(*s == 'X')
            {
                ft_putnbr_fd(va_arg(n,unsigned long long), 1, 'X', &c);
            }
            else if(*s == 'x')
            {
                ft_putnbr_fd(va_arg(n,unsigned long long), 1, 'x', &c);
            }
            else if(*s == 'p')
            {
                 ft_putstr_fd("0x",1);
                 c += 2;
                 ft_putnbr_fd(va_arg(n,unsigned long long), 1, 'x', &c);
            }
        }
        else
        {
            ft_putchar_fd(*s,1);
            c++;
        }
        s++;
    }
    return (c);
}
int main()
{
    int *i;
    printf("\n%d\n",    printf("achraf  %x %p  %x %p %% %u %s %c %d",75676, i,75676, i, -456, "hhhhh", 'c', 900));
    printf("\n%d\n", ft_printf("achraf  %x %p  %x %p %% %u %s %c %d",75676, i,75676, i, -456, "hhhhh", 'c', 900));
}