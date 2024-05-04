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
 * bubble_sort - function Sorts an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t c, leng = size;
	bool bub = false;

	if (array == NULL || size < 2)
		return;

	while (bub == false)
	{
		bub = true;
		for (c = 0; c < leng - 1; c++)
		{
			if (array[c] > array[c + 1])
			{
				swap_integers(array + c, array + c + 1);
				print_array(array, size);
				bub = false;
			}
		}
		leng--;
	}
}
