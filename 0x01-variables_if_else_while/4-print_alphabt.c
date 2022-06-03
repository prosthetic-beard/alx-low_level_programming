#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except q and e
 * add a new line
 * Return: 0 is necessary
 */
int main(void)
{
	char alphbt = 'a';

	while (alphbt <= 'z')
	{
		if (alphbt != 'e' && alphbt != 'q')
		{
			putchar(alphbt);
		}
		alphbt++;
	}
	putchar('\n');
	return (0);
}
