#include "main.h"

/**
 * print_line - function that checks for uppercase character.
 * @n: is the integer for the paramaters of my function
 * Return: 0
 */

void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
