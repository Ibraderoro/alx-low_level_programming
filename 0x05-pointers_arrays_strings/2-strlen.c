#include "main.h"
/**
 * _strlen - This function returns the length of a string
 * @s: Is a string
 * Return: A length
 */

int _strlen(char *s)
{
int lengthy = 0;

	while (*s != '\0')
	{
		lengthy++;
		s++;
	}
	return (lengthy);
}
