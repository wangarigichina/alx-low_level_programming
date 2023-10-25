#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *dnode;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		dnode = temp;
		dnode = dnode->next;
		temp->next = dnode->next;
		free(dnode);
	}
	return (1);
}
