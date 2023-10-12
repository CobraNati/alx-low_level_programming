#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int count;
	int digit;
	int lines;

	for (lines = 0; count <= 9; count++)
	{
		for (count = 0; count <=14; count++)
		{
			digit = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				digit = count % 10;
			}
			_putchar(digit + 48);
		}
		_putchar('\n');
	}
}
