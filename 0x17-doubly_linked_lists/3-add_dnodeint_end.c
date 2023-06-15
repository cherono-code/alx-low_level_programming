#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: double pointer to the list
 * @n: data to insert in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw;
	dlistint_t *temp = *head;

	if (!head)
		return (NULL);

	nw = malloc(sizeof(dlistint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = nw;
		return (nw);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	nw->prev = temp;

	return (nw);
}
