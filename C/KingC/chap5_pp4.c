#include <stdio.h>

int main(void)
{
	float knots;

	printf("Enter the speed(knots): ");
	scanf("%f", &knots);

	if (knots < 1){
	   printf("Calm.\n");
	}
	if (knots > 1 && knots < 3){
	   printf("Light air.\n");
	}   
	if (knots > 4 && knots < 27){
	   printf("Breeze.\n");
	}
	if (knots > 28 && knots < 47){
	   printf("Gale.\n");
	}
	if (knots > 48 && knots < 63){
	   printf("Storm.\n");
	}   
	if (knots > 63){
	   printf("Huricanne.\n");
	}

	return 0;
}
