#include <stdio.h>

int main(void)
{
	int area_code;

	printf("Enter the area code(in Georgia): ");
	scanf("%d", &area_code);

	switch (area_code) {
	  case 229: printf("Major city: Albany\n");
		    break;
	  case 404: printf("Major city: Atlanta\n");
		    break;
	  case 470: printf("Major city: Atlanta\n");
		    break;
	  case 478: printf("Major city: Macon\n");
		    break;
	  case 678: printf("Major city: Atlanta\n");
		    break;
	  case 706: printf("Major city: Columbus\n");
		    break;
	  case 762: printf("Major city: Columbus\n");
		    break;
	  case 770: printf("Major city: Atlanta\n");
		    break;
	  case 912: printf("Major city: Savannah\n");
                    break;		   
	  default:  printf("Area code not recognized\n");
                    break;		   
	}

	return 0;
}	
