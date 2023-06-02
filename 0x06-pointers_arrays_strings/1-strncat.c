#include "main.h"

/**
 * _strncat - concatenates specified values from src to dest
 * @src: second string to copy from
 * @dest: string to be overwritten
 * @n: number of values to concatenate
 * Description: concatenates n number of values from src to end of dest
 * Return: pointer to dest
 **/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
		a++;

	for (b = 0; b < n; b++)
	{
		dest[a] = src[b];
		a++;
	}

	if (dest[a - 1] != '\0')
		dest[a] = '\0';

	return (dest);
}
