/*
** EPITECH PROJECT, 2019
** directory
** File description:
** fonctions1
*/

#include <stdarg.h>
#include "my.h"

int fctgx(va_list ap)
{
    char *a;
    a = va_arg(ap, char *);
    dectohex(a);
    return (0);
}

int fctx(va_list ap)
{
    char *a;
    a = va_arg(ap, char *);
    minidectohex(a);
    return (0);
}
