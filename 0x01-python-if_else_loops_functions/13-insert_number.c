#include "lists.h"

/**
* insert_node - a function that inserts a number into a sorted linked list
* @head: the head of the linked list
* @number: the number to be inserted
* Return: returns the address of the new node or NULL if failed
*/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *prev;
	listint_t *current;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = number;
	new->next = NULL;

    if (*head == NULL)
    {
        *head = new;
        return (new);
    }

	prev = *head;
	current = (*head)->next;

	if ((prev->n) >= number)
	{
		new->next = prev;
		*head = new;
		return (new);
	}

	while (current)
	{
		if ((current->n) >= number)
		{
			new->next = current;
			prev->next = new;
			break;
		}
		prev = prev->next;
		current = current->next;
	}

	return (new);
}
