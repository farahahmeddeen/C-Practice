#include <stdio.h>

int main(void)
{
	int n;
	n = 10;
	int *nn = &n;
	printf("address of n is:%p\n", &n);
	printf("value of n is:%d\n", n);
	*nn = 20;
	printf("value of n is :%d\n", n);
}
