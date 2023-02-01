#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head function
 * Return: Address of the node where loop begins
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snd = head;
	listint_t *light = head;
	if (!head)
		return (NULL);
	while (snd && light && light->next)
	{
		light = light->next->next;
		snd = snd->next;
		if (light == snd)
		{
			snd = head;
			while (snd != light)
			{
				snd = snd->next;
				light = light->next;
			}
			return (light);
		}
	}
	return (NULL);
}
