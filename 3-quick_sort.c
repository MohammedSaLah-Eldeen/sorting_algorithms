#include "sort.h"

/**
* quick_sort - function that sorts an array of integers
*              in ascending order using the Quick sort algorithm
* @array: array
* @size: array's size
* Return: void
*/
void quick_sort(int *array, size_t size)
{
  if (array == NULL || size < 2)
    return;

  quick_sorting(array, 0, size - 1, size);
}


void quick_sorting(int *array, int start, int end, int size)
{
  int pivot;
  
  if (end <= start)
    return;

  pivot = partition(array, start, end, size);
  quick_sorting(array, start, pivot - 1, size);
  quick_sorting(array, pivot + 1, end, size);
}


int partition(int *array, int start, int end, int size)
{
  int temp;
  int pivot = array[end];
  int i = start - 1, j;

  for (j = start; j <= end - 1; j++)
    {
      if (array[j] < pivot)
	{
	  i++;
	  temp = array[i];
	  array[i] = array[j];
	  array[j] = temp;
	  print_array(array, size);
	}
    }
  i++;
  temp = array[i];
  array[i] = array[end];
  array[end] = temp;
  print_array(array, size);

  return i;
}
