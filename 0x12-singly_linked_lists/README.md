# ALX SW Linked List Functions in C

This repository contains a set of C functions for working with linked lists. These functions provide the following capabilities:

1. **Print List**
   - Prototype: `size_t print_list(const list_t *h)`
   - Description: This function prints all the elements of a linked list of type `list_t`. If the `str` field in a node is NULL, it prints "[0] (nil)".
   - Return: The number of nodes.

2. **List Length**
   - Prototype: `size_t list_len(const list_t *h)`
   - Description: This function returns the number of elements in a linked list of type `list_t`.
   - Return: The number of elements in the list.

3. **Add Node at the Beginning**
   - Prototype: `list_t *add_node(list_t **head, const char *str)`
   - Description: This function adds a new node at the beginning of a linked list of type `list_t`. The `str` parameter is duplicated, and the function returns the address of the new element. If it fails, it returns NULL.
   - Return: The address of the new element, or NULL if it failed.

4. **Add Node at the End**
   - Prototype: `list_t *add_node_end(list_t **head, const char *str)`
   - Description: This function adds a new node at the end of a linked list of type `list_t`. The `str` parameter is duplicated, and the function returns the address of the new element. If it fails, it returns NULL.
   - Return: The address of the new element, or NULL if it failed.

5. **Free List**
   - Prototype: `void free_list(list_t *head)`
   - Description: This function frees the memory associated with a linked list of type `list_t`. It takes the head of the list as a parameter.

