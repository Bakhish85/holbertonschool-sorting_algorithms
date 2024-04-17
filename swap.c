#include <stdio.h>
#include "sort.h"
/**
 * _swap - Function that swaps two values
 * @a: Fisrt value
 * @b: Second value
 * Return: 0
 */
void _swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
