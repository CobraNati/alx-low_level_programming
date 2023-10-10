#include "main.h"

/**
 * _isalpha - checks if character is lowercase or uppercase
 *
 * @c: takes input from other functions.
 *
 * Return: 1 if true otherwise 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
		return (1);
	return (0);
}
