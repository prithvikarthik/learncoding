#include <stdio.h>

int main(void)
{
	int a;

	printf("Enter a two-digit number: ");
	scanf("%d", &a);

	printf("The reversal is: ");
	printf("%d\n", ((a % 10) * 10) + a / 10);

	return 0;
}	
