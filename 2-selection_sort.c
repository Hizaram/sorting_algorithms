#include "sort.h"

/**
 * selection_sort - sorts an array using selection sort
 * @array: array to be sorted
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t first, i, j;
	int holder;

	for (i = 0; i < size - 1; i++)
	{
		first = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[first])
				first = j;
		}
		if (first != i)
		{
			holder = array[i];
			array[i] = array[first];
			array[first] = holder;
			print_array(array, size);
		}
	}
}
