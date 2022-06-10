#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to head pointer of the list
 * @n: value of new node
 * Return: address of new node or null if its fails
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return new;
	}
	if ((*head)->next == NULL)
	{
	(*head)->next = new;
	new->prev = *head;
	return new;
	}
	last = *head;
	while (last->next)
	last = last->next;
	last->next = new;
	new->prev = last;
	return new;
}
