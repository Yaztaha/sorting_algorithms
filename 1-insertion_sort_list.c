#include "sort.h"

/**
 * insertion_sort_list - Insertion sort function for DLL
 * @list: DLL head double pointer
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	tmp = *list;
	while (tmp && tmp->next != NULL)
	{
		tmp = tmp->next;
		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;
			if (tmp->prev == NULL)
				*list = tmp;
			else
				tmp->prev->next = tmp;
			print_list(*list);
		}
	}
}
