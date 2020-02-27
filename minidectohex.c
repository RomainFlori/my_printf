/*
** EPITECH PROJECT, 2019
** directory
** File description:
** dectooct
*/

#include "my.h"

int minidectohex(unsigned int nb)
{
    int i = 0;
    int resmodulo = 0;
    char mall[100];

    while (nb != 0) {
        resmodulo = nb % 16;
        if (resmodulo < 10) {
            mall[i] = (resmodulo + 48);
        }
        else
            mall[i] = (resmodulo + 87);
        i++;
        nb = nb / 16;
    }
    i--;
    int y = i;
    while (y >= 0) {
        my_putchar(mall[y]);
        y--;
    }
    return (0);
}