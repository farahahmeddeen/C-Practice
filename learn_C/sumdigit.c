#include <stdio.h>

int main(void)
{
	long long n;
	int count= 0;
	printf("Enter numbers: ");
	scanf("%lld", &n);

	while (n != 0)
	{
		n /= 10;
		++count;
	}
	printf("Number of digits: %d\n", count);
}
