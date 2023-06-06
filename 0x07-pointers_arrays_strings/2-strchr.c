#include "main.h"

/**
 * _strchr - locates a character in a string
 * @src: source string
 * @c: character to search for
 * Description: searches string for character, returns pointer to char
 * Return: pointer to char
 **/

char *_strchr(char *src, char c)
{
	int a;

	if (src == NULL)
	{
		return (NULL);
	}

	for (a = 0; src[a] != '\0'; i++)
	{
		if (src[a] == c)
		{
			return (&src[a]);
		}

	}

	if (src[a] == c)
	{
		return (&src[a]);
	}
	return (NULL);
}
