#include "main.h"

/**
 * print_most_numbers - print 0 - 9
 *                 except from 2 and 4
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
