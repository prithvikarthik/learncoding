#include <stdio.h>

int main(void)
{
	int n;
	//int count = 0;

	printf("Enter an integer value for n: ");
	scanf("%d", &n);

	printf("All the even squares between 1 and n are, \n");
	
	for (int i = 2; i * i <= n; i += 2) {	
	    printf("%d\n", i * i);

	  //++count;
	}
	//printf("I've taken %d iterations to print all the no.s\n", count);
	printf("\n");

	return 0;
}
