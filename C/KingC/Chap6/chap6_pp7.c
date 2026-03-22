//Prints a table of squares using a method without using multiplication.
#include <stdio.h>

int main(void)
{
	int n, odd, square;

	printf("This program prints a table of squares.\n\n");
	printf("Enter the number of entries in the table: ");
	scanf("%d", &n);
	
	square = 1;
	odd = 3;
	for (int i = 1; i <= n; i++) {
	  printf("%10d%10d\n", i, square);

	  square += odd;
	  odd += 2;
	}

	return 0;

}
