#include "main.h"

/**
 * main - entry
 * print_alphabet - a function that prints the alphabet, in lower case
 * Return: Always 0 (Succes)
 */

void print_alphabet(void)
{
	int alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha = alpha + 1;
	}
	_putchar('\n');
}
