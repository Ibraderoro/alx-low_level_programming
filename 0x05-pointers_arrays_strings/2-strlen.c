#include "main.h"

/**
 * strlen -  a function that returns the length of a string
 * @s: char type pointer
 *
 * Description: strlen similiar function to return length
 * Return: string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
