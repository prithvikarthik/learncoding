#include <stdio.h>

int main(void)
{
	float tax;

	printf("Enter your income(notified as dollars): ");
	scanf("%f", &tax);

	if (tax <= 750.00f){
	   printf("%.2f\n", (1.00f / 100.00f) * tax);
	}
	if (tax > 750.00f && tax <= 2250.00f){
	   printf("$%.2f\n", 7.50 + (2.00f / 100.00f) * tax);
	}
	if (tax > 2250.00f && tax <= 3750.00f){
	   printf("$%.2f\n", 37.50 + (3.00f / 100.00f) * tax);
	}
	if (tax > 3750.00f && tax <= 5250.00f){
	   printf("$%.2f\n", 82.50 + (4.00f / 100.00f) * tax);
	}
	if (tax > 5250.00f && tax <= 7000.00f){
	   printf("$%.2f\n", 142.50 + (5.00f / 100.00f) * tax);
	}
	if (tax > 7000.00f){
	   printf("$%.2f\n", 230.00 + (6.00f / 100.00f) * tax);
	}

	return 0;

}	
