#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *t;
	listint_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((t = c) != NULL)
		{
			c = c->next;
			free(t);
		}
		*head = NULL;
	}
}
