#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 * designed with for loop
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
