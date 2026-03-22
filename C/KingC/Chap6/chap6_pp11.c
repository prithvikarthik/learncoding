#include <stdio.h>

int main(void)
{
	int denom;

	printf("We are going to approximate the constant 'e',\n");
	printf("where, e = 1 + 1/1! + 1/2! +...+1/n!.\n");
	printf("Enter the value of n: ");
	scanf("%d", &denom);

	float factorial = 1;
	float e = 1 + (1 / factorial);

	for (int count = 1; count < denom; count++)
	{
        factorial *= count + 1;
	    e += 1 / factorial;
	}

	printf("The value of e is %f\n", e);

	return 0;

}
