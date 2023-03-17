#include <unistd.h>

/**
 * main - main function prints phrase .
 * along with a new line, to standard error.
 * Return: Always 1.
 */

int main(void)

{
	write(2, "and that piece of art is useful\" -Dora Kopar, 2015-10-19\n", 59);
	return (1);
}
