#include <stdio.h>

int main(void)
{
	int i;
	printf("Enter item number: ");
	scanf("%d", &i);
	
	float un_pr;
	printf("Enter unit price: ");
	scanf("%f", &un_pr);

	int mm, dd, yyyy;
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	printf("\n\n");


	printf("Item            Unit            Purchase\n");
	printf("Number:         Price:          Date:\n");
	printf("%d              $  %.2f         %2.2d/%2.2d/%4.4d\n", i, un_pr, mm, dd, yyyy);

	return 0;

}	
