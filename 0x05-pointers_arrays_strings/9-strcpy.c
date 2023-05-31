#include "main.h"

/**
 * *_strcpy - copies string src to buffer pointed to by dest
 * @dest: string pointer
 * @src: buffer pointer
 * Description: cpies string src to buffer
 * Return: dest pointer
 **/

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (a >= 0)
	{
		dest[a] = src[a];

		if (str[a] == '\0')
			return (dest);
		a++;
	}
	return (dest);
}
