#include "main.h"
/**
 * _isdigit - This function that checks for a digit
 * @c: character to be checked
 * Return: 1 if c is a digit or 0 if not
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
