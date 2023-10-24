# ALX SW C - More singly linked lists
This repository contains a set of C functions for working with linked lists. These functions provide the following capabilities:

0. Print list

Prototype: size_t print_listint(const listint_t *h);

This function prints all the elements of a listint_t list and returns the number of nodes. It uses the printf function to display the list elements.
1. List length

Prototype: size_t listint_len(const listint_t *h);

The listint_len function returns the number of elements in a linked list of type listint_t. It traverses the list and counts the nodes.
2. Add node

Prototype: listint_t *add_nodeint(listint_t **head, const int n);

The add_nodeint function adds a new node with a given integer value at the beginning of a listint_t list. It returns the address of the new element or NULL if it fails.
3. Add node at the end

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);

This function adds a new node with a given integer value at the end of a listint_t list. It returns the address of the new element or NULL if it fails.
4. Free list

Prototype: void free_listint(listint_t *head);

The free_listint function frees a listint_t list, releasing the allocated memory for each node while leaving the head pointer intact.
5. Free

Prototype: void free_listint2(listint_t **head);

The free_listint2 function frees a listint_t list and sets the head pointer to NULL. It completely clears the list.
6. Pop

Prototype: int pop_listint(listint_t **head);

This function deletes the head node of a listint_t linked list and returns the head node's data (n). If the linked list is empty, it returns 0.
7. Get node at index

Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

The get_nodeint_at_index function returns the nth node of a listint_t list, where index is the index of the node (starting at 0). If the node does not exist, it returns NULL.
8. Sum list

Prototype: int sum_listint(listint_t *head);

The sum_listint function returns the sum of all the data (n) in a listint_t linked list. If the list is empty, it returns 0.
9. Insert

Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

This function inserts a new node with a given integer value at a specified position in a listint_t list. It returns the address of the new node or NULL if it fails. If it is not possible to add the new node at the specified index, it does not add the new node and returns NULL.
10. Delete at index

Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);

The delete_nodeint_at_index function deletes the node at the specified index of a listint_t linked list. It returns 1 if it succeeds and -1 if it fails.
11. Reverse list (Advanced)

Prototype: listint_t *reverse_listint(listint_t **head);

This advanced function reverses a listint_t linked list without using more than one loop, malloc, free, or arrays. It returns a pointer to the first node of the reversed list and allows for only a maximum of two variables in the function. It provides an efficient way to reverse the list.
