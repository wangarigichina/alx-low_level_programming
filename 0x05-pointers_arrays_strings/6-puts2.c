#include "main.h"

/**
 * puts2 - writes every other character
 * @str: input string to print
 * Description: prints every other character of string
 * Return: nothing
 **/

void puts2(char *str)
{
	int a = 0;
	int b = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	while (b < a)
	{
		_putchar(str[b]);
		b = b + 2;
	}

	_putchar('\n');
}
