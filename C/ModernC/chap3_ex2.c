#include <stdio.h>

int main(void)
{
	float x = 1.00;/*we need to change the value of x in the program itself(this is according to the question)*/
	printf("(a) %-8.1e\n", x);
	printf("(b) %10.6e\n", x);
	printf("(c) %-8.3f\n", x);
	printf("(d) %6f\n", x);

	return 0;

}
