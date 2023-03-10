#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sort an array of integers in ascending order
 * @array: the list of integers given
 * @size: size of integers given
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size; i++)
	{
		int tracker = 0;

		for (j = 0; j < (size - i - 1); j++)
		{

			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				tracker = 1;
			}
		}
		if (tracker == 0)
			break;
	}
}
