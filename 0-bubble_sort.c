#include "sort.h"
/**
 * bubble_sort -  sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: Array of integer
 * @size: Size of the array
 * Return: Not Retrun
 */
void bubble_sort(int *array, size_t size)
{
	size_t  i, j, tmp;

	for (i = 1; i < size  ; i++)
	{
		for (j = 0; j < size - 1  ; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
