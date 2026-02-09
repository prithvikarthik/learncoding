#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4;

	printf("Enter 4 integers(make sure all of them are different): ");
	scanf("%d, %d, %d, %d", &num1, &num2, &num3, &num4);

	int set1max, set1min, set2max, set2min;


	if (num1 > num2){
	     set1max = num1;
	     set1min = num2;
	}     
        else{
	     set1max = num2;
	     set1min = num1;
	}
	if (num3 > num4){
	     set2max = num3;
	     set2min = num4;
	}     
	else{
	     set2max = num4;
	     set2min = num3;
	}     
	if (set1max > set2max){
	   printf("Largest: %d\n", set1max);
	}   
	else{  
	   printf("Largest: %d\n", set2max);
	}   
	if (set1min < set2min){
	   printf("Smallest: %d\n", set1min);
	}   
	else{  
	   printf("Smallest: %d\n", set2min);
	}   

	return 0;
}	
