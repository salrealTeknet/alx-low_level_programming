#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 *
 * Return: nothing
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
