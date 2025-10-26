#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * no return because of void for the output
 */

void print_alphabet(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        _putchar(c);
    }
    _putchar('\n');
}
