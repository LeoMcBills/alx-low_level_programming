#include "lists.h"
/**
 * free_listint_safe - free a linked list
 * @h: head pointer
 * Return: size of list that was returned
 */
ize_t free_listint_safe(listint_t **h)
{
	size_t len = 0;

	int uni;

	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		uni = *h - (*h)->next;
		if (uni > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
