#include <stdio.h>

int main(void)
{
	printf("(a) %d\n", 8 / 5);
	printf("(b) %d\n", -8 / 5);
	printf("(c) %d\n", 8 / -5);
	printf("(d) %d\n", -8 / -5);//There are no values more than 1 and the output is not changing(experimented on C89).

	return 0;
}	
