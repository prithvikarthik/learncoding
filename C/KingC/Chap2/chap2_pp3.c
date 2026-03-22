#include <stdio.h>

int main(void)
{
	float r;

	printf("Enter the radius for the sphere:");
	scanf("%f", &r);
	float v = (4.0f/3.0f) * 3.14 * r * r * r;
	printf("Volume of the sphere:%f\n", v);
	
	return 0;
}	
