#include "main.h"

/**
 * print_array - print n digits of an array
 * @a: array to print
 * @n: number of values to print
 * Description: prints n digits of array
 * Return: nothing
 **/

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d, ", a[b]);
	}
	print("\n");
}
