#include <stdio.h>
/**
 * main - Entry point
 * Description: This prints the lowercase alphabet in reverse
 * Return: 0 on exit
 */
int main(void)
{
char x;
	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	{
		putchar('\n');
	}

	return (0);
}
