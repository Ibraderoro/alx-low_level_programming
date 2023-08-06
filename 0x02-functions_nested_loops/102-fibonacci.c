#include "main.h"
#include <stdio.h>

/**
 * main - This prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
int x;
unsigned long fibo1 = 0, fibo2 = 1, sum;
for (x = 0; x < 50; x++)
	{
	sum = fibo1 + fibo2;
	printf("%lu", sum);
	putchar (',');
	putchar (' ');
	fibo1 = fibo2;
	fibo2 = sum;
	if (x == 49)
		printf("\n");
	if (x == 49)
		break;
	}
return (0);
}
