
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * then ends with a new line
 * Return: 0 is necessary
 */
int main(void)
{
	char alphbt;

	for (alphbt = 'a'; alphbt <= 'z'; alphbt++)
	{
		putchar(alphbt);
	}
	putchar('\n');
	return (0);
}
