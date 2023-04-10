#include <stdio.h>

int main(void)
{
	int num1;
	int i;
	printf("Enter a number: ");
	scanf("%d", &num1);
	printf("Factors of %d are: ", num1);

	for (i = 1 ; i <= num1; i++)
	{
		if (num1 % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
