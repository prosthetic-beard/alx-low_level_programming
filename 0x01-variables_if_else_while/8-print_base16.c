#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * add a new line after code
 * Return: 0 is necessary
 */
int main(void)
{
	int a;
	char alphbt;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (alphbt = 'a'; alphbt <= 'f'; alphbt++)
	{
		putchar(alphbt);
	}
	putchar('\n');
	return (0);
}
