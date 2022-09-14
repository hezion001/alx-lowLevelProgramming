#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10(void) - entry point
 * 
 * Description: Prints 10 times the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
