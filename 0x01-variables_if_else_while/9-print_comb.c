#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 is necessary
 */
int main(void)
{
	int a;

	for (a = 15; a < 25; a++)
	{
		putchar(a);
		if (a != 24)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
