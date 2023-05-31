#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: input string to print
 * Description: prints second half of string
 * Return: nothing
 **/

void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
		a++;

	b = a / 2;

	if (a % 2 == 1)
		b++;

	while (b < a)
	{
		_putchar(str[b]);
		b++;
	}
	_puutchar('\n');
}
