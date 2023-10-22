#include "sort.h"

/**
 * bubble_sort - sort array elements in an ascending order
 * @array: array
 * @size: array size
 *
 */
void bubble_sort(int *array, size_t size)
{
  int i, s = size;
  int flipped = 1;
  int tmp;
  
  if (size < 2) return;
  
  while (flipped)
    {
      flipped = 0;
      for (i = 0; i < s; i++)
	{
	 if (array[i + 1] < array[i])
	   {
	    tmp = array[i];
	    array[i] = array[i + 1];
	    array[i + 1] = tmp;
	    print_array(array, size);
	    flipped = 1;
	   }
	}
    }
}