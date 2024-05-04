#include "sort.h"
/**
 * swap_integers - Swaps two integers in an array.
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */
void swap_integers(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *mini;
	size_t c, k;

	if (array == NULL || size < 2)
		return;

	for (c = 0; c < size - 1; c++)
	{
		mini = array + c;
		for (k = c + 1; k < size; k++)
			mini = (array[k] < *mini) ? (array + k) : mini;

		if ((array + c) != mini)
		{
			swap_integers(array + c, mini);
			print_array(array, size);
		}
	}
}
