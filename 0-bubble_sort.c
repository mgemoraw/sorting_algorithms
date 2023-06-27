#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
* swap - swaps two values
* @a: value of a
* @b: value of b
* Return: returns nothing
*/
void swap(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
/**
* bubble_sort - bubble sort function
* @arr: input array
* @size: size of input array
* Return: returns nothing
*/
void bubble_sort(int arr[], int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size - i; j++)
		{
			if (arr[j] < arr[j - 1])
				swap((arr + j - 1), (arr + j));
				print_array(arr, size);
		}
	}
}
