#include "main.h"
/**
 * rev_string - This function reverses a string
 * @s: Is a string
 * Return: String Reversed
 */
void rev_string(char *s)
{
char rev = s[0];
int lenghty = 0;
int x;

while (s[lenghty] != '\0')
	lenghty++;
for (x = 0; x < lenghty; x++)
	{
	lenghty--;
	rev = s[x];
	s[x] = s[lenghty];
	s[lenghty] = rev;
	}
}
