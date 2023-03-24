#include "main.h"
/**
 * _abs - function to print value of an interger
 *
 * @b: parameter
 *
 * Return: always 0
 */

int _abs(int b)
{
	if (b < 0)
		b = -(b);
	else
		b = b;
	return (b);
}
