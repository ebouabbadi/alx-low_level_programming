#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while ((t = head) != NULL)
	{
		head = head->next;
		free(t);
	}
}
