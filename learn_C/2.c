#include <stdio.h>

int main(void)
{
	int i;
	char c;
	double b;
	long int y;

	printf("value of int:%lu bytes\n",(unsigned long)sizeof(i));
	printf("value of char:%zu bytes\n",sizeof(c));
	printf("value of double:%zu bytes\n",sizeof(b));
	printf("value of long int:%ld bytes\n",sizeof(y));
	return (0);
}
