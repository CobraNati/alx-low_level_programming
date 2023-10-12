#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int row, down;

	for (row = 1; row <= size; ++row)
	{
		for (down = 1; down <= size; ++down)
			_putchar('#');
		_putchar('\n');
	}
}
