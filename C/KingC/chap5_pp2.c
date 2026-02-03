#include <stdio.h>

int main(void)
{
	int t1;
	int t2;

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &t1, &t2);

	if (t1 >= 12 && t2 > 00){
	   printf("Equivalent 12-hour time: %.2d:%.2d PM\n", (t1 - 12), t2);
	}
	else if (t1 == 24 && t2 == 00){
	   printf("Equivalent 12-hour time: %.2d:%.2d AM\n", (t1 - 12), t2);
	}   
	else if (t1 == 12 && t2 == 00){
	   printf("Equivalent 12-hour time: %.2d:%.2d PM\n", t1, t2);
	}
	else if(t1 < 12 && t2 >= 00){
	   printf("Equivalent 12-hour time: %.2d:%.2d AM\n", t1, t2);
	}

	return 0;

}	
