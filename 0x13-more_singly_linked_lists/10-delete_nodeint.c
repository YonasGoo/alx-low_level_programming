#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node
 * @head: a pointer to pointer
 * @index: the index of the node
 * Return: Succeed 1, failed -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (-1);
	}
	current = *head;
	prev = NULL;
	i = 0;

	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);
	prev->next = current->next;
	free(current);
	return (-1);
}
