#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix.
 * @a: A pointer to the square matrix (stored as a 1D array).
 * @size: The size of the matrix (number of rows or columns).
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int row, col;
	
	
	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (row == col)
				sum1 += a[row * size + col];
			if (row + col == size - 1)
				sum2 += a[row * size + col];
		}
	}
	
	printf("%d, %d\n", sum1, sum2);
}
