#include "main.h"
/**
 * more_numbers - This prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
int x, y;
	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
		if (y >= 10)
		_putchar (y / 10 + '0');
		_putchar (y % 10 + '0');
		}
		_putchar ('\n');
	}
}