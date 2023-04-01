#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *s)
{
	char *letters = "aAeEoOtTlL";
	char *codes[] = {"4", "4", "3", "3", "0", "0", "7", "7", "1", "1"};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = *codes[j];
				break;
			}
		}
	}
	return (s);
}

