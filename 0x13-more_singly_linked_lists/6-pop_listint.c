#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: a pointer to pointer to the head of the list
 * Return: the data of the deleted head node, or 0 if empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (data);
}
