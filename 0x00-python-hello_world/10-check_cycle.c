#include "lists.h"
#include <stdio.h>

/**
* check_cycle - a function that checks for cycles in a linked list
* @list: a pointer to the head of a linked list
* Return: returns 0 if there is no cycle, 1 if there is
*/
int check_cycle(listint_t *list)
{
	void *first;
	listint_t *tmp = list;
	int i = 0;

	if (list == NULL)
		return (0);

	first = (void *) list;

	while (tmp != NULL)
	{
		if (i != 0)
			if (first == (void *) tmp)
				return (1);

		i++;
		tmp = tmp->next;
	}

	return (0);
}
