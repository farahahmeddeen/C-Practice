#include <stdio.h>
/**
 * main - storing address of variable to a pointer
 *
 * Return: 0 always
 */

int main(void)
{
	int n;
	int *p;

	n = 100;
	p = &n;
	printf("Address of 'n': %p\n", &n);
	printf("value of 'p': %p\n", &p);
	return (0);
}
