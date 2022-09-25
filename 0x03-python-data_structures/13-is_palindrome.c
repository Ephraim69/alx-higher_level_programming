#include "lists.h"

int is_palindrome(listint_t **head)
{
	listint_t *rev = NULL;

	if (*head == NULL)
		return 1;
	rev = reverse_linked_list(head);



	return (1);
}

listint_t *reverse_linked_list(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *new = NULL;
	int i = 0;

	new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
	new->next = NULL;
	printf("\n\nn============= Before Rev ================\n\n");
	while(tmp)
	{
		// printf("Value %d: %d\n", i++, tmp->n);
		new->n = tmp->n;
		tmp->next = new;
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);

		tmp = tmp->next;
	}
	printf("\n\nn============= After Rev ================\n\n");


	print_listint(new);

	return (*head);
}
