#include "main.h"

/**
 * _isupper - check if c is capital or small
 *
 * @c: input for letter
 *
 * Return: 1 if it is capital, 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (0);
}
