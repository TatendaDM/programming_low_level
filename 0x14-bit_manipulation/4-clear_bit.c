#include "main.h"

/**
 * clear_bit - 0 any given bit
 * @n: number to be changed pointer
 * @index: shows bit index to clear
 *
 * Return: Success 1, Failure -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
