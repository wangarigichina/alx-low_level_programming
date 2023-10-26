#include "main.h"

/**
 * wildcmp - A function that compares two strings
 * @s1: First input string
 * @s2: Second input string
 * Return: 1 if strings identical and 0 in otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '*')
			return (wildcmp(s1, ++s2));
		else if (*s1 == '*' && *s2 == '\0')
			return (wildcmp(++s1, s2));
		return (0);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(++s1, ++s2));
	}
	else if (*s1 == '*')
	{
		if (*(s1 + 1) == '*')
			return (wildcmp(++s1, s2));
		else
			return (wildcmp(s1, findsrc(s2, *(s1 + 1), 0, 0) + s2));
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, ++s2));
		else
			return (wildcmp(s1 + findsrc(s1, *(s2 + 1), 0, 0), s2));
	}

	return (0);

}

int findsrc(char *s, char c, int i, int p)
{
	if (*(s + i) == '\0')
		return (p + 1);
	else if (*(s + i) == c || *(s + i) == '*')
		p = i;

	return (findsrc(s, c, i + 1, p));
}
