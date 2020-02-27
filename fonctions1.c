/*
** EPITECH PROJECT, 2019
** directory
** File description:
** fonctions1
*/

#include <stdarg.h>
#include "my.h"

int fcts(va_list ap)
{
    char *str;
    str = va_arg(ap, char *);
    my_putstr(str);
    return (0);
}

int fcti(va_list ap)
{
    int nb;
    nb = va_arg(ap, int);
    my_putnbr(nb);
    return (0);
}

int fctd(va_list ap)
{
    int nb;
    nb = va_arg(ap, int);
    my_putnbr(nb);
    return (0);
}

int fctc(va_list ap)
{
    char a;
    a = va_arg(ap, char *);
    my_putchar(a);
    return (0);
}

int fctu(va_list ap)
{
    int nb;
    nb = va_arg(ap, unsigned int);
    my_putnbr_unsi(nb);
    return (0);
}