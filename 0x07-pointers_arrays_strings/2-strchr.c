#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate a character in a string
 * @s: the string to search
 * @c: the character to locate
 *
 * Return: a pointer to the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	/**
	 * check for match to target character
	 * return a pointer to the current character if it matches
	 **/

	while (*s != '\0') /* iterate over each character in the string*/
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
