#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 *
 * Return: final value of len
 **/

char *_strpbrk(char *s, char *accept)
{
	/*init a  pointer p to NULL*/
	char *p = NULL;
	int i, j;

	/*iterate through and compare each char in the string s and accept*/
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i]; /* a match is found & address stored*/
				break; /*char in s does not match any char in accept*/
			}
		}
		if (p != NULL) /*no match found, end of loop*/
		{
			break;
		}
	}
	return (p);
}
