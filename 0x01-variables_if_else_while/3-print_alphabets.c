#include <stdio.h>
/**
 * main - This prints the alphabet in lowercase, and then in uppercase
 * Return: 0 on success
 */

int main(void)
{
char x;
char y;
	for (x = 'a'; x <= 'z'; x++)
	{putchar(x); }
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');

	return (0);
}
