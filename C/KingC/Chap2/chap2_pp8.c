#include <stdio.h>

int main(void)
{
	float p;
	float i;
	float m;

	printf("Enter amount of loan: $");
	scanf("%f", &p);

	printf("Enter interest rate: ");
	scanf("%f", &i);

	printf("Enter monthly payment: $");
	scanf("%f", &m);

	float mr = ((i/100.0f)/12);

	float f	= ((p * mr)) - m;
	float s	= (((p + f) * mr)) - m;
	float t = ((((p + f) + s) * mr)) - m;
	printf(" Balance after first payment: $%.2f\n", p + f);
	printf(" Balance after second payment: $%.2f\n", (p + f) + s);
	printf(" Balance after third payment: $%.2f\n", ((p + f) + s) + t);

	return 0;
}	
