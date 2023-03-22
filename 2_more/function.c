#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int max(int num1, int num2);

int main()
{
	int a = 5;
	int b = 10;
	int c;

	c = max(a, b);
	printf("maximum number is: %d\n", c);
	return (0);
}
int max(int num1, int num2)
{
	int res;

	if (num1 > num2)
		res = num1;
	else
		res = num2;
	return res;

}
