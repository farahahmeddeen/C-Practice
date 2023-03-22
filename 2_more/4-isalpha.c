#include "main.h"
/**
 * _isalpha - function that checks if its a letter
 *
 * @c: parameter
 *
 * Return: 1 if its a letter and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
