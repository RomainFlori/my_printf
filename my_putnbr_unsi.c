/*
** EPITECH PROJECT, 2019
** directory
** File description:
** my_putnbr_unsi
*/

#include "my.h"

int my_putnbr_unsi(unsigned int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb == 0) {
        my_putchar('0');
        return (0);
    }
    if (nb < 10 && nb > 0) {
        my_putchar(nb + 48);
        return (0);
    }
    if (nb / 10 >= 0) {
        my_putnbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
    return (0);
}