#include "main.h"

/**
 * string_toupper - changes all lower case to capital letters
 * @str: string to modify
 * Description: changes all lower case letters to capitals
 * Return: char
 **/

char *string_toupper(char *)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] -= 32;
	}

	return (str);
}
