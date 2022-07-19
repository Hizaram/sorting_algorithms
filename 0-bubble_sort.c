#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t e = 0;
	int temp = NULL;
	int switches = 0;

	if (array == NULL)
		return;

	while (switches >= 0)
	{
		for (e = 0; e < size - 1; e++)
		{
			if (array[e + 1] < array[e])
			{
				temp = array[e + 1];
				array[e + 1] = array[e];
				array[e] = temp;
				switches++;
				print_array(array, size);
			}
		}
		if (switches == 0)
			switches = -1;
		else
			switches = 0;
	}
}
