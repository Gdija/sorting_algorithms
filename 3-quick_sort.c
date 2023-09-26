#include "sort.h"
/**
 * lomuto_partition - assuming the pivot element as the last element
 * @array: array of integers
 * @start: first element in the array
 * @end: last element in the array
 * @size: size of the array
 * Return: index of pivot
 */
int lomuto_partition(int *array, int start, int end, size_t size)
{
	int pvt = array[end];
	int x = start - 1;
	int temp, y;

	for (y = start; y <= end - 1; y++)
	{
	if (array[y] < pvt)
	{
	x++;
	temp = array[x];
	array[x] = array[y];
	array[y] = temp;
	}
	}
	x++;
	temp = array[x];
	array[x] = array[end];
	array[end] = temp;
	print_array(array, size);
	return (x);
}
/**
 * quick_lomuto - quick sort algo recursion
 * @array: array of integers
 * @start: first element in the array
 * @end: last element in the array
 * @size: size of the array
 */
void quick_lomuto(int *array, int start, int end, size_t size)
{
	int z;

	if (start < end)
	{
	z = lomuto_partition(array, start, end, size);
	quick_lomuto(array, start, z - 1, size);
	quick_lomuto(array, z + 1, end, size);
	}
}
/**
 * quick_sort - sorts an array of integers
 * @array: array of integers
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	quick_lomuto(array, 0, size - 1, size);
}
