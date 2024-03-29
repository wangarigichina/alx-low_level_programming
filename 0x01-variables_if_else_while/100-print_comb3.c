#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
		{
			putchar(digit1 + '0');
			putchar(digit2 + '0');

			if (digit1 < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
