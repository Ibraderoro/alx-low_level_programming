#include <stdio.h>
/**
 * main - Entry point
 * Description: This prints all the numbers of base 16 in lowercase
 * Return: return 0 on exit
 */
int main(void)
{
int x;
char y;

	for (x = 0; x < 10; x++)
	{
		putchar(x % 10 + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	{
		putchar('\n');
	}
	return (0);
}
