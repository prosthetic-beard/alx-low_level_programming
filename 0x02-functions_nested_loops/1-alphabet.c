#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char charac;

	charac = 'a';

	while (charac <= 'z')
	{
		_putchar(charac);
		charac++;
	}

	_putchar('\n');
}
