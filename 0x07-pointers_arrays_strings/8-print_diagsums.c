#include "main.h"
#include <stdio.h>
/**
* print_diagsums - print sum of the diagonals of a square matrix of integers
* @a: input
* @size: input
*
* Return: Always 0 (Success)
*/

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;
	/* Calc sum of first side → */
	for (i = 0; i < size; i++)
	{
	sum1 += *(a + i * size + i);
	}
	/* Calc sum of second side ↓ */
	for (i = 0; i < size; i++)
	{
	sum2 += *(a + i * size + (size - 1 - i));
	}
	printf("Sum of first diagonal: %d\n", sum1);
	printf("Sum of second diagonal: %d\n", sum2);
}
