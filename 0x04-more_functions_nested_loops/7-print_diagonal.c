#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the no of times the \ printed
*/

void print_diagonal(int n)
{
	int diagonal, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (diagonal = 0; diagonal < n; diagonal++)
		{
			for (space = 0; space < diagonal; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
