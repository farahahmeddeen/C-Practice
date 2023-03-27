#include <stdio.h>
/**
 * main - size of a pointer
 *
 * Return: 0 always
 */

int main(void)
{
	int *p;

	printf("size of a pointer: %lu byte(s)\n", sizeof(p));
	printf("address of 'p': %p\n", &p);
	return (0);
}
