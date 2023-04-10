#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int c;
	int gcd;
	printf("Enter two interger: ");
	scanf("%d %d", &i, &j);

	for (c = 1; c <= i && c <= j; c++)
	{
		if (i % c == 0 && j % c == 0)
			gcd = c;
	}
	printf("G.C.D of %d and %d = %d\n", i, j, gcd);
       return (0);	
}
