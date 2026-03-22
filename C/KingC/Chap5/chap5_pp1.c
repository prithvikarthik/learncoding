#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter a number(only till 3 digits): ");
	scanf("%d", &n);
	
	if (n >= 0 && n <= 9){
	   printf("%s\n", "Your number has 1 digit");
	}
	else if (n >= 10 && n <= 99){
	   printf("%s\n", "Your number has 2 digits");
	}   
	else if (n >= 100 && n <= 999){
	   printf("%s\n", "Your number has 3 digits");
	}
	else {
	   printf("I said only 3 digits!!\n");
	}

	return 0;


}	
