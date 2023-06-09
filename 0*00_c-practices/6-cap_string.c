#include "main.h"
/**
 * cap_string - function to capitalize all words
 *
 * @y: pointer to a string
 *
 * Return: return to y
 */

char *cap_string(char *y)
{
	int count;

	count = 0;
	while (y[count] != '\0')
	{
		if (y[0] >= 97 && y[0] <= 122)
		{
			y[0] = y[0] - 32;
		}
		if (y[count] == ' ' || y[count] == '\t' || y[count] == '\n'
		    || y[count] == ',' || y[count] == ';' || y[count] == '.'
		    || y[count] == '.' || y[count] == '!' || y[count] == '?'
		    || y[count] == '"' || y[count] == '(' || y[count] == ')'
		    || y[count] == '{' || y[count] == '}')
		{
			if (y[count + 1] >= 97 && y[count + 1] <= 122)
			{
				y[count + 1] = y[count + 1] - 32;
			}
		}
		count++;
	}
	return (y);
}
