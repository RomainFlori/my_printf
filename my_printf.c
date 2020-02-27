/*
** EPITECH PROJECT, 2019
** directory
** File description:
** my_pintf
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

int fcto(va_list ap)
{
    int nb;
    int i;
    nb = va_arg(ap, int);
    dectooct(nb);
    return (0);
}

int gest(va_list ap)
{
    my_putchar('%');
    return (0);
}

int my_printf(char *s, ...)
{
    int (*fct[127])(va_list);

    fct['s'] = &fcts;
    fct['i'] = &fcti;
    fct['d'] = &fctd;
    fct['c'] = &fctc;
    fct['u'] = &fctu;
    fct['o'] = &fcto;
    fct['X'] = &fctgx;
    fct['x'] = &fctx;
    fct['%'] = &gest;
    va_list ap;
    va_start(ap, s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '%')
            fct[s[++i]](ap);
        else
            my_putchar(s[i]);
    }
    va_end(ap);
}

int main (void)
{
    int octal = 155;
    int hexadecimal = 1055;
    int entier = 10;
    unsigned int unsig = 11;
    char *test = "Hello World\n";
    //mon printf
    my_printf("%s", "My World\n");
    my_printf("The world\n");
    my_printf("%s", test);
    my_printf("%i", entier);
    my_printf("%d", entier);
    my_printf("%u", unsig);
    my_printf("%o", octal);
    my_printf("%x", hexadecimal);
    my_printf("%X", hexadecimal);
    my_putchar('\n');
    my_putchar('\n');
    //leprintf system
    printf("%s", "My World\n");
    printf("The world\n");
    printf("%s", test);
    printf("%i", entier);
    printf("%d", entier);
    printf("%u", unsig);
    printf("%o", octal);
    printf("%x", hexadecimal);
    printf("%X", hexadecimal);

    return (0);
}