#include <stdio.h>

int main(void)
{
	int a;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &a);
	
	int o5 = a % 8;
	int o4 = (a / 8) % 8;
	int o3 = ((a / 8) / 8) % 8;
	int o2 = (((a / 8) / 8) / 8) % 8;
	int o1 = ((((a / 8) / 8) / 8) / 8) % 8;


	printf("In octal, your number is: %d%d%d%d%d\n", o1, o2, o3, o4, o5);


	return 0;
}	
