#include <stdio.h>

int main(void)
{
	float largest;
	float given_num;

	printf("Enter a number: ");
	scanf("%f", &given_num);
	
	largest = given_num;

	for (int i = 0; i < 5; i++) {
	  printf("Enter a number: ");
	  scanf("%f", &given_num);
	  
	  if (given_num >= largest) {
	    largest = given_num;
	  }
	}

	printf("The largest number in your given list of numbers is %f\n", largest);

	return 0;
}
