#include "main.h"
/**
 * print_rev - This prints a string, in reverse, followed by a new line.
 * @s: Is a string
 * Return: A string
 */
void print_rev(char *s)
{
int lengthy = 0;
int x;
while (*s != '\0')
{
	lengthy++;
	s++;
}
s--;
for (x = lengthy - 1; x >= 0; x--)
	{
	_putchar(*s);
	s--;
	}
_putchar('\n');
}
