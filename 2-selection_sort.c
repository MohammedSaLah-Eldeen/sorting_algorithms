#include "sort.h"

/**
* selection_sort - A function that use selection sort algorithm.
* @array: An array to sort.
* @size: The size of the array.
* Return: Nothing.
*/
void selection_sort(int *array, size_t size)
{
int i, j, s = size;
int idx_min;
int tmp;

for (j = 0; j < s - 1; j++)
{
idx_min = j;
for (i = j + 1; i < s; i++)
{
if (array[i] < array[idx_min])
idx_min = i;
}
if (idx_min != j)
{
tmp = array[j];
array[j] = array[idx_min];
array[idx_min] = tmp;
print_array(array, size);
}
}

}
