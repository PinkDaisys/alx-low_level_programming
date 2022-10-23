#include <stdio.h>

/**
 * main- program starting point
 * Return: zero if no value
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
