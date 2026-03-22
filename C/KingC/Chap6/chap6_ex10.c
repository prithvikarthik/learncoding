//This is is a program to test how to replace a continue statement with a goto statement(both statements show how to exit from a loop).
#include <stdio.h>

int main(void)
{
	int n = 0;
	int sum = 0;
	int i;
	
	while (n < 10) {
	  printf("Enter a integer value: ");	
	  scanf ("%d", &i);
	  if (i == 0)
	    goto jump;	  
	    sum += i;
	    n++;
            jump:
	}

	return 0;
}	
