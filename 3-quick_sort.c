#include "sort.h"

void swap(int *a, int *b);
int partition(int *array, int low, int high, size_t size);
void sort_help(int *array, int low, int high, size_t size);
void quick_sort(int *array, size_t size);

/**
 * swap - swap two integers
 * @a: pointer to first int
 * @b: pointer to second int
 *
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

/**
 * partition - partition of array of integers using lomuto scheme
 * @array: array of integer
 * @low: lower bound of the array
 * @high: higher bound of the array
 * @size: size of the array
 *
 * Return: the pivot index
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int j;
	int i = low - 1;

	for (j = low; j <= high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
			swap(&array[i], &array[j]);
			print_array(array, size);
			}

		}
	}
	return (i);
}

/**
 * sort_help - recursive function that sort the array
 * @array: array to sort
 * @low: lower bound
 * @high: higher bound
 * @size: size of the array
 */

void sort_help(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high, size);
		sort_help(array, low, pivot_index - 1, size);
		sort_help(array, pivot_index + 1, high, size);

	}
}

/**
 * quick_sort - sort an array
 * @array: array of integers
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	sort_help(array, 0, size - 1, size);
}
