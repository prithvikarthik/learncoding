#include <stdio.h>

int main(void)
{
	int i = 17;
	int j = 1;

	printf("%d\n", (-i/j) );
	printf("%d\n", (-i)/j );/*both printf functions give the same output, only if the variables are positive*/

	return 0;
}	
