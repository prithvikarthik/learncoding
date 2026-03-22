#include <stdio.h>

int main(void)
{
	float x;

	printf("Enter a value for 'x': ");
	scanf("%f", &x);
	float p = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	printf("So the polynomial (((((3x + 2)x - 5)x - 1)x + 7)x - 6) = %f\n", p);/*this program is modified version of chap2_pp5.c supporting Horner's Rule of factorization of polynomials*/

	return 0;	
}


