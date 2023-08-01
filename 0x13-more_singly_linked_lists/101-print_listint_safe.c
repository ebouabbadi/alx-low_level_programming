#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *tp;
	listp_t *kash;

	if (head != NULL)
	{
		kash = *head;
		while ((tp = kash) != NULL)
		{
			kash = kash->next;
			free(tp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nds = 0;
	listp_t *hp, *new, *add;

	hp = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hp;
		hp = new;

		add = hp;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hp);
				return (nds);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nds++;
	}

	free_listp(&hp);
	return (nds);
}
