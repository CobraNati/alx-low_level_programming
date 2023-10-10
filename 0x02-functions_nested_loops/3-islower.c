#include "main.h"

/**
 * _islower - function to check and consider ASCII Values.
 *
 *@c: checks input of function
 *
 * Return: returns 1 if c is lowercase
 *         otherwise always 0 (Success)
*/

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	return (0);
}
