#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * add a new line after code
 * Return: 0 is necessary
 */
int main(void)
{
	int alphbt;

	for (alphbt = 'a'; alphbt <= 'z'; alphbt++)
		putchar(alphbt);
	for (alphbt = 'A'; alphbt <= 'Z'; alphbt++)
		putchar(alphbt);
	putchar('\n');
	return (0);
}
