#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: parameter
 * @b: parameter
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
