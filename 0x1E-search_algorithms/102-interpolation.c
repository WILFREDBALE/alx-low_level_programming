#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where the value is located, or -1 if not found
 **/
int interpolation_search(int *array, size_t size, int value)
{
	size_t left, right, pos;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		pos = left + (((double)(right - left) / (array[right] - array[left])) * (value - array[left]));

		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			right = pos - 1;
		else
			left = pos + 1;
	}

	return (-1);
}
