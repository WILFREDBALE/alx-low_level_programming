#include "search_algos.h"

/**
 * rec_search - Searches for a value in an array of integers using
 *              the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value in the array, or -1 if not found.
 *
 * Description: Prints the array being searched after each change.
 */
int rec_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");
	for (i = 0; i < size; i++)
	{
		if (i == 0)
			printf(":");
		else
			printf(",");
		printf(" %d", array[i]);
	}
	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value in the array, or -1 if not found.
 *
 * Description: Calls rec_search to perform the search and returns the index.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
