/*
 * File: 3-print_numbers.c
 *========melbali========
 */

#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void) {
    int i;
    char digit;

    for (i = 0; i <= 9; i++) {
        digit = '0' + i;
        _putchar(digit);
    }










