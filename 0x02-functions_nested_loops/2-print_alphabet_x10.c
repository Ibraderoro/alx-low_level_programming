#include "main.h"

/**
 * print_alphabet_x10 - make the alphabet_x10
 *
 *Description: This function prints 10 times the alphabet, in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
char y;
int x = 0;
	while (x < 10)
	{

		for (y = 'a'; y <= 'z'; y++)
		{
		_putchar(y);
		}
	_putchar('\n');
		x++;
	}

}
