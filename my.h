/*
** EPITECH PROJECT, 2019
** my lib printf
** File description:
** My library
*/

#include <stdarg.h>

void my_putchar(char c);
int my_putnbr(int nb);
int my_putnbr_unsi(unsigned int nb);
int dectohex(unsigned int nb);
int minidectohex(unsigned int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int dectooct(int nb);
int fcts(va_list ap);
int fcti(va_list ap);
int fctd(va_list ap);
int fctc(va_list ap);
int fctu(va_list ap);
int fctgx(va_list ap);
int fctx(va_list ap);
