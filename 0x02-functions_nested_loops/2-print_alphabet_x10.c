#include <stdio.h>
#include "main.h"
/**
<<<<<<< HEAD
 * print_alphabet_x10(void) - entry point
 * 
 * Description: Prints 10 times the alphabet in lowercase
 *
=======
 * print_alphabet_x10 - entry point
 * Description: Prints ten times the alphabet in lowercase with _putchar
>>>>>>> 45bbf15a7abefbc6db1de6ceb652296756847720
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
