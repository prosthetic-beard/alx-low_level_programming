#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * starting from 0, followed by a new line, using putchar
 * Return: 0 is necessary
 */
int main(void)
{
	int a;

	for (a = 12; a < 22; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
