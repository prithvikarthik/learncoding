#include <stdio.h>

int main(void)
{
	float x, y;
	int i;

	printf("Enter 12.3 45.6 789: ");
	scanf("%f%d%f", &x, &i, &y);
	printf("%f, %d, %f\n", x, i, y);

	return  0;
}	
