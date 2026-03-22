#include <stdio.h>

int main(void)
{
	int i;

	printf("Enter 17 or -17: ");
	scanf("%d", &i);

	printf("%d\n", i >= 0 ? i : -i);

	return 0;	
}	
