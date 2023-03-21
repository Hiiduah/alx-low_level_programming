#include "main.h"

/**
 * _islower - Checks for lowercase characters
 * @r: the character to be cheched
 * Return 1 for lowercase character or 0 for anything else
 */
int _islower(int r)
{
	if (r >= 97 && r <= 122)
	{
		return (1);
	}
	return (0);
}
