#include "main.h"
/**
 * swap_init - swap the value of 2 int.
 * @a: The first int
 * @b: The second inter
 * Return: 0
 */
void swap_init(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
