0x13 C - More Stringly Lis=nked Lists.

0. Print list
Write a function that prints all the elements of a listint_t list.
Return: the number of nodes
Format: see example
You are allowed to use printf

1. List length
Write a function that returns the number of elements in a linked listint_t list.

2. Add node
Write a function that adds a new node at the beginning of a listint_t list.

3. Add node at the end
Write a function that adds a new node at the end of a listint_t list.
Return: the address of the new element, or NULL if it failed

4. Free list
Write a function that frees a listint_t list.

5. Free
Write a function that frees a listint_t list.
The function sets the head to NULL

6. Pop
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data(n)
if the linked list is empty return 0

7. Get node at index
Write a function that returns the nth node of a listint_t linked list.
where index is the index of the node, starting at 0
if the node does not exist, return NULL

8. Sum list
Write a function that returns the sum of all the data (n) of a listint_t linked list.
if the list is empty, return 0

9. Insert
Write a function that inserts a new node at a given position.
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL.

10. Delete at index
Write a function that deletes the node at index index of a listint_t linked list.
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed

11. Reverse list
Write a function that reverses a listint_t linked list.
Returns: a pointer to the first node of the reversed list
You are not allowed to use more than 1 loop.
You are not allowed to use malloc, free or arrays
You can only declare a maximum of two variables in your function

12. Print (safe version)
Write a function that prints a listint_t linked list
Returns: the number of nodes in the list
This function can print lists with a loop
You should go through the list only once
If the function fails, exit the program with status 98
Output format: see example

13. Free (safe version)
Write a function that frees a listint_t list.
This function can free lists with a loop
You should go though the list only once
Returns: the size of the list that was free’d
The function sets the head to NULL

14. Find the loop
Write a function that finds the loop in a linked lists
Returns: The address of the node where the loop starts, or NULL if there is no loop
You are not allowed to use malloc, free or arrays
You can only declare a maximum of two variables in your function
