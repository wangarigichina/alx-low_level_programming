#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * use only putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hex_digits;

	for (hex_digits = '0'; hex_digits <= '9'; hex_digits++)
		putchar(hex_digits);

	for (hex_digits = 'a'; hex_digits <= 'f'; hex_digits++)
		putchar(hex_digits);

	putchar('\n');

	return (0);

}
