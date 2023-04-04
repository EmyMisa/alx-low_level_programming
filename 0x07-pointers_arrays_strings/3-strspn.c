#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 *
 * Return: final value of len
 **/

unsigned int _strspn(char *s, char *accept)
{
	/*init a var len to 0,count the length of the prefix substring*/
	unsigned int len = 0;
	int i, j;

	/*iterate through and compare each character in the string s and accept*/
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++; /* a match is found*/
				break; /*character in s does not match any character in accept*/
			}
		}
		if (accept[j] == '\0') /* end of string*/
		{
			break;
		}
	}
		return (len);
}
