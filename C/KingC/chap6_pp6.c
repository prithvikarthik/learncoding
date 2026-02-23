#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter an integer value for n: ");
	scanf("%d", &n);

	printf("All the even squares between 1 and n are, \n");
	
	for (int i = 2; i * i <= n; i++) {
	  if (i % 2 == 0) {
	    printf("%d\n", i * i);
	  }

	  else if (i % 2 != 0) {
	    continue;
	  }  
	}
	printf("\n");

	return 0;
}
