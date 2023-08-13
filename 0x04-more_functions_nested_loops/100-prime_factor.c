#include <stdio.h>
#include "main.h"
/**
 * main - This prints the largest prime factor of the number 612852475143
 * Return: Always 0
 */
int main(void)
{
unsigned long int x, n = 612852475143;
	for (x = 3; x < 782849; x = x + 2)
	{
		while ((n % x == 0) && (n != 1))
			n = n / x;
	}
	printf("%lu\n", n);
	return (0);
}
