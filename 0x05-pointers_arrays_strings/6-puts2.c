#include "main.h"
/**
 * puts2 - This prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: Is an input
 * Return: A character
 */
void puts2(char *str)
{
int x = 0;
	while (str[x] != '\0')
	{
	_putchar(str[x]);
	x += 2;
	}
	_putchar('\n');
}
