#include <stdio.h>

int main(void)
{
	int a = 24;
	char age[6] = {'A', 'a', 'k', 'a', 's', 'h'};

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
