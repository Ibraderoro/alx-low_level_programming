#include "main.h"
#include <stdio>

/**
 * main - Adding two fibonacci terms
 * Return: Always 0
 */

int main(void)
{
	unsigned long fibol = 0, fibol2 = 1, fibolsum;
	float total_sum;
	while (1)
	{
	fibolsum = fibol + fibol2;
	if (fibolsum > 4000000)
		break;
	if ((fibolsum % 2) == 0)
		total_sum += fibolsum;
	}
}
