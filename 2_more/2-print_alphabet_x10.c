#include "main.h"
/**
 * print_alphabet_x10 - function that prints alphabets 10 times
 *
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	char k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
		_putchar('\n');
	}
}
