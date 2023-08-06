#include "main.h"

/**
 * times_table - This prints the 9 times table
 * Return: times table
 */

void times_table(void)
{
int x;
int y;
int z;
for (x = 0; x <= 9; x++)
{
_putchar ('0');
for (y = 1; y < 10; y++)
	{

	_putchar (',');
	_putchar (' ');

	z = x * y;
	if (z <= 9)
		{
		_putchar (' ');
		_putchar (z + '0');
		}
	else
		{
		_putchar ((z / 10) + '0');
		_putchar ((z % 10) + '0');
		}
	}
_putchar ('\n');
}
}
