#include "main.h"
/**
 * puts_half - This prints half of a string, followed by a new line.
 * @str: Is a string
 * Return: half of string
 */
void puts_half(char *str)
{
int half_lenghty, lenghty;
lenghty = 0;
	while (str[lenghty] != '\0')
		lenghty++;

	half_lenghty = lenghty / 2;

	if ((lenghty % 2) == 1)
		half_lenghty++;

	while (half_lenghty < lenghty)
	{
		_putchar (str[half_lenghty]);
		half_lenghty++;
	}
_putchar ('\n');
}
