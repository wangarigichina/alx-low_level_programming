#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints all the elements in the list
 * @h: A pointer to listint structure
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
