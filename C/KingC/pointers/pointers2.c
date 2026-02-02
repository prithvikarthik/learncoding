#include <stdio.h>
#include <string.h>

int main(void)
{
	int a = 5, b = 23, c = 38;

	int *ptr = &a;

	printf("The value pointed by ptr now %d\n", *ptr);

	ptr++;
	printf("The value pointed by ptr now %d\n", *ptr);

	ptr++;
	printf("The value pointed by ptr now %d\n", *ptr);

	ptr++;
	printf("The value pointed by ptr now %d\n", *ptr);

	return 0;

}	
