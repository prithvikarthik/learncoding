#include <stdio.h>

int main(void)
{
	float n;

	printf("We are going to approximate the constant 'e',\n");
	printf("where, e = 1 + 1/1! + 1/2! +...\n");
	printf("It will keep adding,...\n until the last term becomes less than E(a small floating point number)\n.");
    printf("Enter the value for E: ");
	scanf("%f", &n);

    if (n >= 3)
    {
        printf("INVALID value for 'E'\n");
        printf("Since E is not greater than or equal to 3.\nPlease try again.\n");    
    }

	float factorial = 1;
	float e = 1 + (1 / factorial);
    float float_num = 1 / factorial;

	for (int count = 1; float_num >= n; count++)
	{
        factorial *= count + 1;
        float_num = 1.0f / factorial;
	    e += float_num;
	}

	printf("The value of e is %f\n", e);

	return 0;

}
