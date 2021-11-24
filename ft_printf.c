
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
            {
                str = ft_itoa(va_arg(args, int));
                ft_putstr_fd(str, 1);
                c += ft_strlen(str);
            }
            else if (*s == 'c')
            {
                ft_putchar_fd(va_arg(args, int), 1);
                c++;
            }
            else if (*s == 's')
            {
                str = va_arg(args, char *);
                ft_putstr_fd(str, 1);
                c += ft_strlen(str);
            }
            else if (*s == 'u')
            {
                str = ft_utoa(va_arg(args,unsigned int));
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
                ft_putnbr_hexa(va_arg(args,unsigned long long), 'X', &c);
            }
            else if(*s == 'x')
            {
                ft_putnbr_hexa(va_arg(args,unsigned long long), 'x', &c);
            }
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
int main()
{
    printf("\n%d\n",    printf("achraf  %x %p %% %u %s %c %d",7, ((void*)0), 1, "gh", 'c', 900));
    printf("\n%d\n", ft_printf("achraf  %x %p %% %u %s %c %d",7, ((void*)0), 1, "fd", 'c', 900));
}