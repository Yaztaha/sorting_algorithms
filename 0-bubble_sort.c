#include "sort.h"
/**
 * bubble_sort - Bubble sort an array
 * @array: Array to be sorted
 * @size: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, tmp;

	if (array == NULL || size == 0)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size; j++)
		{
			if (array[j - 1] > array[j])
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
}
