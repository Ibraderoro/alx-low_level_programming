#include <stdio.h>
/**
 * main - entry point
 * Description: This prints all single digit numbers of base 10 using putchar
 * Return: 0 on exit
 */
int main(void)
{
int x;
	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}
	{
		putchar('\n');
	}

	return (0);
}
