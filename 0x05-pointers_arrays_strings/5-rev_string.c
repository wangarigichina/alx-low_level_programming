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
	int j = 0;
	char temp [1000];


	while (s[a] != '\0')
	{
		a++;
	}

	for (; i > 0; i--)
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
