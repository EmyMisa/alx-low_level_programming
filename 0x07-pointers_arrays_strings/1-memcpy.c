#include "main.h"

/**
* _memcpy - a function that copies memory area
*
* @dest: a pointer to the destination memory area
* @src: a pointer to the source memory area
* @n: number of bytes to be copied
*
* Return: copied memory with n bytes
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*initialize a counter variable i to 0*/
	unsigned int i;

	/*copy src pointer value to the corresponding location in memory area*/
	for (i = 0; i < n; i++)
	{
		/*dereference the value at new memory area*/
		*(dest + i) = *(src + i);
	}
	return (dest);
}
