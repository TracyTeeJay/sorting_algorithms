#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


/**
 * bubble_sort - function to sort array of integers in ascending order
 * @array: the integer list
 * @size: array size
 * Return: nothing. Prints array after each swap
 */

void bubble_sort(int *array, size_t size)
{
	size_t cnt, lenS = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (cnt = 0; cnt < lenS - 1; cnt++)
		{
			if (array[cnt] > array[cnt + 1])
			{
				swap_ints(array + cnt, array + cnt + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		lenS--;
	}
}
