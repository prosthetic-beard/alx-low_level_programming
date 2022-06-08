#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char charac;
	int i;

	i = 0;

	while (i < 10)
	{
		charac = 'a';
		while (charac <= 'z')
		{
			_putchar(charac);
			charac++;
		}
		_putchar('\n');
		i++;
	}
}
