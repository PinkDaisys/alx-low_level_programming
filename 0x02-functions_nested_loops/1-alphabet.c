#include "main.h"

/**
 * print_alphabet - print lowes
 *
 * Return: 0 if no error
 */

void print_alphabet(void)

{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
