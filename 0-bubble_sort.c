#include "sort.h"

/**
* bubble_sort - sort array elements in an ascending order
* @array: array
* @size: array size
*
*/
void bubble_sort(int *array, size_t size)
{
int i, j, s = size;
int tmp;

if (size < 2 || array == NULL)
return;

for (j = 0; j < s - 1; j++)
{
for (i = 0; i < s - j - 1; i++)
{
if (array[i + 1] < array[i])
{
tmp = array[i];
array[i] = array[i + 1];
array[i + 1] = tmp;
print_array(array, size);
}
}
}
}
