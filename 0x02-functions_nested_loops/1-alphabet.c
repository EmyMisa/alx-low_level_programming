#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase to stdout
 *
 * Return: void function requires no return value
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
