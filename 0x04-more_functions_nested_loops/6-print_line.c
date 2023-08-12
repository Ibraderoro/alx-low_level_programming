#include "main.h"
/**
 * print_line - This draws a straight line in the terminal
 *
 * @n:  is the number of times the character
 * Return: An integer
 */
void print_line(int n)
{
int x;
	for (x = 0; x < n; x++)
	{
	_putchar('_');
	}
	_putchar('\n');
}
