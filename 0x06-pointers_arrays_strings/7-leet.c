#include "main.h"

/**
 * leet - convert string to leet speak
 * @c: string to convert
 * Description: replaces a, e, o, t and l with 4, 3, 0, 7, and 1 respectively
 * Return: string c
 **/

char *leet(char *)
{
	int a, b;
	char *replace;

	replace ="aAeEoOtTlL4433007711";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (c[a] == replace[b])
				c[a] = replace[b + 10];
		}
	}
	return (c);
}
