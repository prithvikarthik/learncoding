#include <stdio.h>

int main(void)
{
	float x = 1.00;/*the value of x can only be changed inside the program itself.*/

	printf("(a)%-8.1e\n", x);
	printf("(b)%10.6e\n", x);
	printf("(c)%-8.3f\n", x);
	printf("(d)%6f\n", x);

	return 0;
}	
