#include <stdio.h>

int main(void)
{
	float c;
	
	printf("Enter an amount:");
	scanf("%f", &c);
	float t = (105.0f/100.0f) * c;
	printf("With tax added:$%f\n", t);

	return 0;
}

