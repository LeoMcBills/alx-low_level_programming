#include "lists.h"
/**
 * sum_listint - return sum of elements in linked list
 * @head: pointer to head
 * Return: 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
