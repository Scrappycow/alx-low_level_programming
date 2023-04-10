#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: starting from 0 of the bit you want to get
 * @n: decimal number
 * Return: the value of the bit at index index or -1 for error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_num;

	bit_num = (n >> index);
	if (index > 32)
	return (-1);
	return (bit_num & 1);
}
