#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - This prints all natural numbers from n to 98
 *@n: This number return a value
 * Return: Always 0
 */

void print_to_98(int n)
{
if (n > 98)
{
	while (n > 98)
	{
	printf("%d", n--);
	printf(",");
	printf(" ");
	}

	printf("%d\n", n);
}
else
	{
	while (n < 98)
	{
	printf("%d", n++);
	printf(",");
	printf(" ");
	}
	printf("%d\n", n);
	}
}
