/*Computes an EAN's(European Article Number) check digit.*/
#include <stdio.h>

int main(void)
{
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12;

	printf("Enter the first 12 digitso(of the EAN): ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12);

	int first_sum = a2 + a4 + a6 + a8 + a10 + a12;
	int second_sum = a1 + a3 + a5 + a7 + a9 + a11;
	int total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	return 0;
}
