#include "main.h"

/**
 * _puts - prints string
 * @str: input string to print
 * Description: prints string to stdout
 * Return: nothing
 **/


void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
