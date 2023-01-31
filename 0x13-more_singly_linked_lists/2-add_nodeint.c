#include "lists.h"
/**
 * add_nodeint - add node at the begginning of a list
 * @head: points to head
 * @n: new data to insert
 * Return: Address of a new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
