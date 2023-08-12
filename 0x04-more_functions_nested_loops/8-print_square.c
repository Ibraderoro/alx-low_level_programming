#include "main.h"
/**
 * print_square - This function prints a square
 * @size: Is the size of square
 * Return: void
 */
void print_square(int size)
{
int height, base;
	if (size <= 0)
	{
	_putchar('\n');
	}
	for (base = 0; base < size; base++)
	{
		for (height = 0; height < size; height++)
		{
		_putchar('#');
		}
	_putchar('\n');
	}
}
