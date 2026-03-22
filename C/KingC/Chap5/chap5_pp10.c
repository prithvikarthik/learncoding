#include <stdio.h>

int main(void)
{
	int numerical_grade;

	printf("Enter the numerical grade: ");
	scanf("%d", &numerical_grade);

	int tens_digit = numerical_grade / 10;
       	 
	if (numerical_grade < 0){
	   printf("Cannot enter negative grades.\n");
	}

	switch (tens_digit)  {	
	case 0: printf("Letter grade: F\n");
		break;
	case 1: printf("Letter grade: F\n");	
		break;
	case 2: printf("Letter grade: F\n");	
	        break;	
	case 3: printf("Letter grade: F\n");	
	        break;	
	case 4: printf("Letter grade: F\n");	
	        break;	
	case 5: printf("Letter grade: F\n");
	        break;	
	case 6: printf("Letter grade: D\n");	
	        break;	
	case 7: printf("Letter grade: C\n");	
	        break;	
	case 8: printf("Letter grade: B\n");	
	        break;	
	case 9: printf("Letter grade: A\n");
		break;	
       }	 
	if (tens_digit == 10 && (numerical_grade - (tens_digit * 10)) > 0){
	   printf("Error, can only enter till 100.\n");
	}
        else if (tens_digit == 10 && (numerical_grade - (tens_digit * 10)) == 0){
	   printf("Letter grade: A\n");
	}   

	return 0;

}		
