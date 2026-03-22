#include <stdio.h>

int main(void)
{
	int mm, dd, yyyy;
	printf("Enter a date (mm/dd/yyyy) : ");
	scanf("%2d/%2d/%4d", &mm, &dd, &yyyy);

	printf("You entered the date %.4d%.2d%.2d\n", yyyy, mm, dd);

	return 0;
}	
