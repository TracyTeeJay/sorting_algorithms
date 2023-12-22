#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @erste: The first integer to swap.
 * @zweite: The second integer to swap.
 */
void swap_ints(int *erste, int *zweite)
{
	int tmpF;

	tmpF = *erste;
	*erste = *zweite;
	*zweite = tmpF;
}

/**
 * shell_sort - function that sorts integer arrays in ascending order
 * @array: integer array
 * @size: arrray size
 * Description: Uses the Knuth interval sequence.
 */

void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap_ints(array + j, array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
	}
}
