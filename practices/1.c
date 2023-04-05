#include <stdio.h>

unsigned int first(unsigned int n)
{
	if (n <= 50)
		return (n + 1);
	printf("%d", n);
}
