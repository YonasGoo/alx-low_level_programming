#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given postition
 * @head: a pointer to pointer
 * @idx: the index
 * @n: the int value
 * Return: address of new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (i != idx - 1)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
