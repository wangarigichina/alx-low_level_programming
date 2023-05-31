#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: string to reverse
 * Description: prints string in reverse to stdout
 * Return: nothing
 **/

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;

	for (a = a - 1; a >= 0; a--)
		_putchar(s[a]);

	_putchar('\n');
}
