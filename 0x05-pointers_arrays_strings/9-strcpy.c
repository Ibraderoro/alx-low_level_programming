#include "main.h"
/**
 * *_strcpy - This copies the string pointed to by src
 * @dest: Is a char type string
 * @src: Is a char type string
 * Description: Copy the string pointed to by pointer 'src' to
 * the the buffer pointed to by dest
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int x = -1;
	do {
		x++;
		dest[x] = src[x];
	} while (src[x] != '\0');
	return (dest);
}
