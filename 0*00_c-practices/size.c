#include <stdio.h>
/**
 * main - address of variables
 *
 * Return: 0 always
 */

int main(void)
{
	char c;
	int m;

	printf("address of the value 'c':%p\n", &c);
	printf("address of the value 'm':%p\n", &m);
	return (0);
}
