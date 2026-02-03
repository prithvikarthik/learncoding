#include <stdio.h>

int main(void)
{
	int score1;

	printf("Enter your score(out of hundred): ");
	scanf("%d", &score1);

	if (score1 >= 90){
	   printf("A\n");
	} else if (score1 >= 80){
	   printf("B\n");
	} else if (score1 >= 70){
	   printf("C\n");
	} else if (score1 >= 60){
	   printf("D\n");
	} else {
	   printf("Failed\n");
	}
	int score2;

	printf("Enter the same score(out of hundred): ");
	scanf("%d", &score2);

	if (score2 < 60){
	   printf("Failed\n");
	} else if (score2 < 70){
	   printf("D\n");
	} else if (score2 < 80){
	   printf("C\n");
	} else if (score2 < 90){
	   printf("B\n");
	} else {
	   printf("A\n");
	}

	return 0;
}	
