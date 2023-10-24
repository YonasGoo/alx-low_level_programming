#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node
 * @head: a pointer to the head of the list
 * @index: the index of the node to retrieve
 * Return: a pointer to the nth node, or NULL if doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
