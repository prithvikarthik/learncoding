#include <stdio.h>

int main(void)
{
	float c;
	
	printf("Enter an amount:");
	scanf("%f", &c);
	float t = (105.0f * c)/100.0f;
	printf("With tax added:$%f\n", t);

	return 0;
}

