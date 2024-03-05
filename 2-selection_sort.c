#include "sort.h"

/**
 * selection_sort - selection sort function
 * @array: pointr to array
 * @size: size of array
 * Return: nothing
*/
void selection_sort(int *array, size_t size)
{
	unsigned int i, j;
	unsigned int minm;
	int temp;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minm = i;
		for (j = i + 1; j < size; ++j)
		{
			if (array[j] < array[minm])
			{
				minm = j;
			}
		}
		if (minm != i)
		{
			temp = array[i];
			array[i] = array[minm];
			array[minm] = temp;
		}
		print_array(array, size);
	}
}
