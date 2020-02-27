/*
** EPITECH PROJECT, 2019
** directory
** File description:
** dectooct
*/

#include <stdlib.h>
#include "my.h"

int dectooct(int nb)
{
    int calcul = 1;
    int rest = 0;
    int i = 0;
    int resmodulo = 0;

    while (nb != 0) {
        resmodulo = nb % 8;
        nb = nb / 8;
        i = i + (resmodulo * calcul);
        calcul = calcul * 10;
    }
    my_putnbr(i);
    return (0);
}