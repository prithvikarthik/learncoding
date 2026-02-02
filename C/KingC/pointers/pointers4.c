#include <stdio.h>

int main(void)
{
	char age[6] = {'A', 'a', 'k', 'a', 's', 'h'};

	char *ptr = age;
	
	for (int i = 0; i < 6; i++)
	{
		printf("The value pointed by ptr now %c %c\n", *ptr, age[i]);
		ptr++;
	}

	return 0;

}	
