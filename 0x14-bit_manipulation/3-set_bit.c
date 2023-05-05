#include "main.h"

/**
 * set_bit - reassigns a bit to index to 1
 * @n: number to be changed pointer
 * @index: 1 is set to an index bit
 *
 * Return: success 1, failure -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
