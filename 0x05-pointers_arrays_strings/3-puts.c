#include "main.h"
/**
 * _puts - This prints a string, followed by a new line, to stdout
 * @str: Is a string to be print
 * Return: A string
 */
void _puts(char *str)
{
while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
_putchar('\n');
}
