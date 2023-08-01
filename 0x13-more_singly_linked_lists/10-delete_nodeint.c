#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head.
 * @index: index.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *pr;
	listint_t *next;

	pr = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && pr != NULL; i++)
		{
			pr = pr->next;
		}
	}

	if (pr == NULL || (pr->next == NULL && index != 0))
	{
		return (-1);
	}

	next = pr->next;

	if (index != 0)
	{
		pr->next = next->next;
		free(next);
	}
	else
	{
		free(pr);
		*head = next;
	}

	return (1);
}
