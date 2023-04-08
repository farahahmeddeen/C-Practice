#include <stdio.h>

int main(void)
{
	double num1 , num2;
	char c;

	printf("Enter an operator(*,/,-,+): ");
	scanf("%c", &c);
	printf("Enter two number: ");
	scanf("%lf %lf", &num1, &num2);

	if (c == '+')
		printf("%.1lf + %.1lf = %.1lf\n", num1, num2 , num1 + num2);
	else if (c == '-')
		printf("%.1lf - %.1lf = %.1lf\n", num1, num2 , num1 - num2);
	else if (c == '/')
		printf("%.1lf / %.1lf = %.1lf\n", num1, num2 , num1 / num2);
	else if( c == '*')
		printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1 * num2);
	else
		printf("you have entered the wrong sign");
}
