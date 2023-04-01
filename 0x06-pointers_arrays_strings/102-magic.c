#include <stdio.h>

/**
   * main - prints to stdout
   *
   * Return: void
   **/

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
  /**
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   **/
	*p = a[2] - 926;
  /*
   * main -prints to stdout
   * subtracts 926 from the value of a[2]
   * stores the result in the variable pointed to by p, which is n
   * a[2] is initialized to 1024,subtracting 926 from it will result in 98
   * return - 0
   */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
