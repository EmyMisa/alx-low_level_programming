#include "main.h"

/**
* _memset - fill a block of memory with a set value
* @s: a pointer to the block of memory to be filled
* @b: byte value to be written into the memory block
* @n: number of bytes to be filled with the constant value
*
* Return: changed array with new value for n bytes
**/

char *_memset(char *s, char b, unsigned int n)
{
	/*initialize a counter variable i to 0*/
	unsigned int i;

	/*write the value of b into consecutive bytes of the memory block*/
	for (i = 0; i < n; i++)
	{
		/*dereference the value at new memory location that is i bytes away from s*/

		*(s + i) = b;
	}
	return (s);
}
