#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: string
 * @accept: bytes being compared
 * Description: finds number of bytes required to find accept in s
 * Return: bytes required to find accept
 **/

unsigned int _strspn(char *s, char *accept)
{
	int a, b, exit;

	for (a = 0; s[a] != '\0'; a++)
	{
		exit = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				exit = 1;
			}
		}
		if (exit == 0)
		{
			return (a);
		}
	}
	return (a);
}
