#include <stdio.h>
/**
 * main - Entry point
 * Description: This prints all possible combinations of single-digit numbers
 * Return: return 0 at exit
 */
int main(void)
{
int y;

	for (y = 0; y < 10; y++)
	{
		putchar(y % 10 + '0');
		if (y == 9)
		continue;
		putchar(',');
		putchar(' ');
	}
	{
		putchar('\n');
	}
	return (0);
}
