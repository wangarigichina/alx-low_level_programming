#include "main.h"

/**
 * print_alphabet - prints lower case alphabet
 *
 **/

void print_alphabet(void)
{

	char i, b;

	for (b = 0; b <= 9; b++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
