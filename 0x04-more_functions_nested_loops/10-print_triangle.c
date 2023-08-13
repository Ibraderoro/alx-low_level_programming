#include "main.h"

/**
 * print_triangle - This  prints a triangle
 * @#: Is a character
 * @size: The size of the triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
int width, space, hash;
if (size <= 0)
{
	_putchar('\n');
}
	for (width = 1; width <= size; width++)
	{
		for (space = 0; space < size - width; space++)
		{
		_putchar(' ');
		}
			for (hash = 0; hash < width; hash++)
			{
			_putchar('#');
			}
	_putchar('\n');
	}
}
