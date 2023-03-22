#include "main.h"
/**
 * _islower - function to check is a letter is lowercase
 *
 * @c: parameter
 * Return: 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
