#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int hns;
	listint_t *h;
	listint_t *cu;

	if (*head == NULL)
		return (0);

	cu = *head;

	hns = cu->n;

	h = cu->next;

	free(cu);

	*head = h;

	return (hns);
}
