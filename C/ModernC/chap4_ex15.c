#include <stdio.h>

int main(void)
{
	int i = 1;
        int j = 2;

	printf("(a) %d\n", i += j);
	printf("(b) %d\n", i--);
	printf("(c) %d\n", i * j / i);
	printf("(d) %d\n", i % ++j);

	return 0;
}	
