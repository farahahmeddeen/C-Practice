#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i = 0, j;

	while (i < 5)
	{
		j = 0;

		while (j < 6)
		{
			printf("new ");
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
