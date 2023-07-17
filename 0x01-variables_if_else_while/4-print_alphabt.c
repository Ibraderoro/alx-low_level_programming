#include <stdio.h>
/**
 * main - this prints the alphabet in lowercase
 * Return: 0 on success
 */
int main(void)
{
char y;
	for (y = 'a'; y <= 'z'; y++)
	{
	
	if (y == 'e' || y == 'q')
	continue;
	putchar(y);
	}
	
	putchar('\n');

	return (0);
}
