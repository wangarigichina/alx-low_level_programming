#include "main.h"

/**
 * 0_strcat - concatenates two strings
 * @src: second string to copy from
 * @dest: string to be overwritten
 * Description: concatenates src to end of dest
 * Return: pointer to dest
 **/

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
		a++;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}

	dest[a] = src[b];

	return (dest);
}
