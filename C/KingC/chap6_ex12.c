#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	  if (n == 1) {
	    printf("Your number is neither composite nor prime.\n");
	  }  
	
	  int d = 1;
	  if (n % d != 0 && n % d > 0) {
	    printf("Your number is prime\n");
	    break;
	for (; (d * d) < n; d++) {
	  if (n % d == 0) {
	    printf("Your number is composite(not prime).\n");	  
	    break;
	  }

	  }  

	}

	return 0;

}	
