#include "main.h"
/**
 * positive_or_negative - Checks if integer is
 * positive negative or zero.
 *
 * @i: the integer to be computed.
 * Return: value
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
