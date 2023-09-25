Function Descriptions
1. print_listint
Description: Prints all elements of a listint_t list.
Prototype: size_t print_listint(const listint_t *h)
2. listint_len
Description: Returns the number of elements in a listint_t list.
Prototype: size_t listint_len(const listint_t *h)
3. add_nodeint
Description: Adds a new node at the beginning of a listint_t list.
Prototype: listint_t *add_nodeint(listint_t **head, const int n)
4. add_nodeint_end
Description: Adds a new node at the end of a listint_t list.
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n)
5. free_listint
Description: Frees a listint_t list.
Prototype: void free_listint(listint_t *head)
6. free_listint2
Description: Frees a listint_t list and sets the head to NULL.
Prototype: void free_listint2(listint_t **head)
7. pop_listint
Description: Deletes the head node of a listint_t list.
Prototype: int pop_listint(listint_t **head)
8. get_nodeint
Description: Returns the nth node of a listint_t list.
Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
9. sum_listint
Description: Returns the sum of all the data (n) of a listint_t list.
Prototype: int sum_listint(listint_t *head)
10. insert_nodeint
Description: Inserts a new node at a given position in a listint_t list.
Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
11. delete_nodeint
Description: Deletes the node at a given position in a listint_t list.
Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index)
