#include <stdio.h>

int main(void)
{
	int i = 0;
	printf("(a)");
	while (i < 10){
	  printf("%d ", i);
	}
	printf("\n");

	printf("(b)");
	for (; i < 10;){
	  printf("%d ", i);
	}
	printf("\n");

	printf("(c)");
	do {
	  printf("%d ", i);
	} while (i < 10);
	printf("\n");

	return 0;
}	
