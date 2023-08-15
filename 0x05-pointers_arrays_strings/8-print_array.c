#include "main.h"
/**
 * print_array - This  prints n elements of an array of integers,
 * followed by a new line.
 * @n: is the number of elements of the array to be printed
 * @a: Is the array to be inputed
 * 
 *
 */
void print_array(int *a, int n)
{
int element_of_array;
	for (element_of_array = 0; element_of_array < n; element_of_array++)
	{
		printf("%d", a[element_of_array]);
		if (element_of_array != (n - 1))
		{
			printf(", ");
		}
	}
putchar ('\n');
}
