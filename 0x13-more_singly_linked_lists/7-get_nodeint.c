#include "lists.h"
/**
 * get_nodeint_at_index - get nth node
 * @head: head pointer
 * @index: index of the node
 * Return: pointer to node returned
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}
	return (temp ? temp : NULL);
}
