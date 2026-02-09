#include <stdio.h>

int main(void)
{
	printf("(a) ");
	for (int i1 = 0; i1 < 10; i1++){
	  printf("%d ", i1);
	}
	printf("\n");

	printf("(b) ");
	for (int i2 = 0; i2 < 10; ++i2){
	  printf("%d ", i2);
	}
	printf("\n");

	printf("(c) ");
	for (int i3 = 0; i3++ < 10; ){
	  printf("%d ", i3);
	}
	printf("\n");
}
