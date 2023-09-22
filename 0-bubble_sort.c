#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: list of numbers
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t x;
	size_t y;
	size_t z;
	size_t tem;

	for (x = 0; x < size; x++)
	{
	for (y = 0; y < (size - 1); y++)
	{
	if (array[y] > array[y + 1])
	{
	tem = array[y];
	array[y] = array[y + 1];
	array[y + 1] = tem;
	for (z = 0; z < size; z++)
	{
	printf("%d ", array[z]);
	}
	printf("\n");
	}
	}
	}
}
