//
#include <stdio.h>

int main(void)
{
	for (int i = 10; i >= 1; i /= 2){
	  printf("%d \n", i++);
	  getchar();
	}
	printf("\n");

	return 0;

}
