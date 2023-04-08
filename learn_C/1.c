#include <stdio.h>

void count(char *str)
{
	int i;
	int count = 0;

	for ( i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	if (count > 9)
	{
		putchar((count / 10) + '0');
		putchar((count % 10) + '0');
		putchar('\n');
	}
	else
	{
		putchar(count + '0');
		putchar('\n');
	}

}
