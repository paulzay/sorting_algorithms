#include "sort.h"

/**
 * insertion_sort_list
*/

void insertion_sort_list(listint_t **list)
{
	int i = 1;

	if (list == NULL)
		return;

	while ((*list)->next != NULL)
	{
		int k = list[i];
		int j = i - 1;

		while (j >= 0 && list[j] > k)
		{
			list[j + 1] = list[j];
			j = j - 1;
		}
		list[j + 1] = k;
		i++;
	}
}
