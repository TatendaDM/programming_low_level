#include "main.h"

/**
 * get_endianness - checks the size of a machine if its little or big endian
 * Return: Big 0, Little 1
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
