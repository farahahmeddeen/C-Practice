#include <stdio.h>
#define SUB(a, b) ((a) - (b))
#undef SUB
//#define SUB(a, b) (a) - (b)
int main()
{
	int c;
	c = SUB(4,3);
	printf("%d\n", c);
}
