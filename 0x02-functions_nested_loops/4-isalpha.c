#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to print
 *
 * Return: On success 1 if c is alphabetic  character.
 * If otherwise, 0 is returned.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			return (1);
		else
			return (0);
}
