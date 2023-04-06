#include "main.h"

int _sqrt_helper(int n, int first, int second)
{
	if (first > second)
	{
		return (-1);
	}
	int middle = (first + second) / 2;
	
	if (middle * middle == n)
		return (middle);
	if (middle * middle < n)
		return (_sqrt_helper(n, middle + 1, first));
	else
		return (_sqrt_helper(n, smiddle - 1, second));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 1, n));
}
