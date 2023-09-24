#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: list o numbers
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t x;
	size_t y;
	size_t tem;
	size_t low_num;

	for (x = 0; x < size - 1; x++)
	{
	low_num = x;
	for (y = x + 1; y < size; y++)
	{
	if (array[y] < array[low_num])
	{
	low_num = y;
	}
	}
	if (low_num != x)
	{
	tem = array[x];
	array[x] = array[low_num];
	array[low_num] = tem;
	print_array(array, size);
	}
	}
}
