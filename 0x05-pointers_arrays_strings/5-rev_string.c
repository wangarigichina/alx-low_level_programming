#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Description: reverses the string
 * Return: nothing
 **/

void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char temp [1000];


	while (s[a] != '\0')
	{
		a++;
	}

	for (; a > 0; a--)
	{
		temp[b] = s[a - 1];
		b++;
	}

	while (a < b)
	{
		s[a] = temp[a];
		a++;
	}
}
