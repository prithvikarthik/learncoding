#include <stdio.h>

int main(void)
{
	int n, d; 

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	if (n == 1) {
	  printf("Your number is neither composite nor prime.\n");
	  return 0;
	}

	for (d = 2; (d * d) <= n; d++) {
	  if (n % d == 0) {
	    printf("Your number is composite(not prime)\n");
	    return 0;
	  }
	}  

	  printf("Your number is prime\n");

	return 0;

}	
