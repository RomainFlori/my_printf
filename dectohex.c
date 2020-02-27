/*
** EPITECH PROJECT, 2019
** directory
** File description:
** dectooct
*/

#include "my.h"
#include <stdio.h>

int dectohex(unsigned int nb)
{
    int i = 0;
    int resmodulo = 0;
    char mall[100];

    while (nb != 0) {
        resmodulo = nb % 16;
        if (resmodulo < 10) {
            mall[i] = (resmodulo + 48);
        }
        if (resmodulo >= 10)
            mall[i] = (resmodulo + 55);
        i++;
        nb = nb / 16;
    }
    i--;
    for (int y = i; y >= 0; y--) {
        my_putchar(mall[y]);
    }
    return (0);
}