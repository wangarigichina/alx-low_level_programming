#include "main.h"

/**
 * reverse_array - reverse contents of array
 * @a: an array of integers
 * @n: the number of elements to swap
 * Description: reverse contents of int array
 * Return: nothing
 **/

void reverse_array(int *a, int n)
{
	int b, array_rev;
	int b = 0;

	for (b = 0; b < n; b++)
	{
		array_rev = a[n - 1];
		a[n - 1] = a[b];
		a[b] = array_rev;
		n--;
	}
}
