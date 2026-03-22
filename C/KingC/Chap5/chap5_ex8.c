#include <stdio.h>

int main(void)
{
	int age;

	printf("What is your age? ");
	scanf("%d", &age);

	printf("%s\n", ((13 <= age) && (age <= 19)) ? "you are a teenager" : "you are not a teenager");

	return 0;
}	
