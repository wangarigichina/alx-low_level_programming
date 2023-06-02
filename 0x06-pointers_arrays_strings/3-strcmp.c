#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string to compare
 * Description: compares two strings to see which is
 * Return: -15 if s1 is less than s2, 0 if equal,
 * 15 if s1 is greater
 **/

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}

	if (s1[a] == s2[a])
		return (0);
	return (s1[a] - s2[a]);
}
