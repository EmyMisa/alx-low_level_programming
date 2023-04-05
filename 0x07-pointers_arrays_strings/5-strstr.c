#include "main.h"
#include <stddef.h>

/**
 * _strstr - searches a string for any of a set of bytes
 * @haystack: input
 * @needle: input
 *
 * Return: final value of len
 **/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	/*iterate through each character in haystack string*/
	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		/*compare rest of char in both strings*/
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			/*compare characters */
			if (*(haystack + i + j) != *(needle + j))
			{
				break;
			}
		}
		if (*(needle + j) == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
