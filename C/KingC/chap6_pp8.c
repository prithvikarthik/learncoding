#include <stdio.h>

int main(void)
{

	int days, weekstart;
	
	printf("Enter number of days in the current month: ");
	scanf("%d", &days);

	printf("Enter the starting day of the week (1 = Sun, 7 = Sat): ");
	scanf("%d", &weekstart);
	printf("\n");

	for (int i = 1; i <= days; i++) {
	  
	   if (weekstart == 7) {
	     printf("\n");
	     weekstart = 0;
	   }
	   printf("%2d ", i);
	   weekstart++;
	}
	printf("\n");

	return 0;
}
