#include <stdio.h>

/**
 * main - prints the a reverse of lowercase alphabets,
 * add a new line after code
 * Return: 0 is necessary
 */
int main(void)
{
	char alphbt;

	for (alphbt = 'z'; alphbt >= 'a'; alphbt--)
	{
		putchar(alphbt);
	}
	putchar('\n');
	return (0);
}
