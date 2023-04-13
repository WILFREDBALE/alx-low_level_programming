#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @left: The left boundary of the subarray to search.
 * @right: The right boundary of the subarray to search.
 * @value: The value to search for.
 *
 * Return: The index of the value in the array, or -1 if not found.
 *
 * Description: Recursive helper function for advanced_binary.
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array");
		for (size_t i = left; i <= right; i++)
			printf("%s %d", (i == left) ? ":" : ",", array[i]);
		printf("\n");

		if (array[mid] == value)
		{
			if (mid == left || array[mid - 1] != value)
				return (mid);
			else
				return (binary_search(array, left, mid, value));
		}
		else if (array[mid] < value)
			return (binary_search(array, mid + 1, right, value));
		else
			return (binary_search(array, left, mid - 1, value));
	}
	return (-1);
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
 * Description: Calls binary_search to perform the search and returns the index.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_search(array, 0, size - 1, value));
}
