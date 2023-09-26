#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character;
	int integer;
	long long_type;
	long long long_long;
	float float_type;

	printf("Size of a char: %lu byte\n", sizeof(character));
	printf("Size of an int: %lu bytes\n", sizeof(integer));
	printf("Size of a long int: %lu bytes\n", sizeof(long_type));
	printf("Size of a long long int: %lu bytes\n", sizeof(long_long));
	printf("Size of a float: %lu bytes\n", sizeof(float_type));

	return (0);
}
