#include "main.h"
#include <stdio.h>

/**
 * main - This computes and prints the sum of all the multiples of numbers
 *
 * Return: Always 0
 */
int main(void)
{
int a;
int sum = 0;

for (a = 0; a < 1024; a++)
{
	if ((a % 3 == 0) || (a % 5 == 0))
	{
	sum = sum + a;
	}
}
printf("%d\n", sum);
return (0);
}
