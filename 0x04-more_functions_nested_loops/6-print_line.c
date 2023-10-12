#include "main.h"

/**
 * print_line - print a dash line
 *
 * @n: no of times the _ should be printed
*/

void print_line(int n)
{
	int dash;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (dash = 1; dash <= n; ++dash)
			_putchar('_');
		_putchar('\n');
	}
}
