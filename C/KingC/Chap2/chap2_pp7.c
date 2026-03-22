#include <stdio.h>

int main(void)
{
	int d;
	printf("Enter a dollar amount(an integer amount):");
	scanf("%d", &d);
	printf("Least no. of $20,$10,$5 and $1 bills needed:-\n");
	printf("$20 bills: %d\n", d/20);
	printf("$10 bills: %d\n", (d % 20)/10);
	printf(" $5 bills: %d\n", ((d % 20)% 10)/5);
	printf(" $1 bills: %d\n", (((d % 20)% 10)% 5)/1);

	return 0;
}	
