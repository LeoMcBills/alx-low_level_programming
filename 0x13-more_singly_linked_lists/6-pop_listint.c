#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: pointer to head
 * Return: Head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	int number;

	if (!head || !*head)
		return (0);
	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (number);
}
