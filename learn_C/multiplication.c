#include <stdio.h>

int main(void)
{
	int i;
	int j;
	printf("Enter number: ");
	scanf("%d", &i);
	for (j = 1; j <= 10; j++)
	{
		printf("%d * %d = %d\n",i, j, i * j);
	}
	return (0);
}
