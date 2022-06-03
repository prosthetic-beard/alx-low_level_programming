
#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ) is necessary
 */
int main(void)
{
	int a, b;

	for (a = 58; a <= 67; a++)
	{
		for (b = 59; b <= 68; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 67 || b != 68)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
