#include <stdio.h>

int main(void)
{
	int num;
	int num1;
	int remainder;
	int results = 0;

	printf("Enter a three digit number: ");
	scanf("%d", &num);
	num1 = num;

	while (num1 != 0)
	{
		remainder = num1 % 10;
		results = results + (remainder * remainder * remainder);
		num1 = num1 / 10;
	}
	if (results == num)
		printf("%d is a amstrong number.\n", num);
	else
		printf("%d is not an amstrong number.\n", num);
	return (0);
}
