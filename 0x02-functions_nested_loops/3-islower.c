#include "main.h"

/**
 *  _islower - function checks for lowercase character.
 * @c: The character to print
 *
 * Return: On success 1 if c is lowercase character.
 * If otherwise, 0 is returned.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
