#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array of integers using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    int jump = sqrt(size);
    int left = 0;
    int right = 0;

    while (right < (int)size && array[right] < value)
    {
        printf("Value checked array[%d] = [%d]\n", right, array[right]);
        left = right;
        right += jump;
    }

    printf("Value found between indexes [%d] and [%d]\n", left, right);

    for (int i = left; i < (int)size; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1;
}