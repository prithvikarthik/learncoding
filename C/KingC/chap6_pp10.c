#include <stdio.h>

int main(void)
{
	int mm1, dd1, yy1;

	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &mm1, &dd1, &yy1);

	int mm2, dd2, yy2;

	while (mm1 != 0 && dd1 != 0 && yy1 != 0)
	{
	  printf("Enter a date (mm/dd/yy): ");
	  scanf("%d/%d/%d", &mm2, &dd2, &yy2);

	  if (mm2 == 0 && dd2 == 0 && yy2 == 0)
	    {
	      break;
	    }
	  else
	    {
	      if (yy1 < yy2)
	      {}
	      else if (yy1 == yy2)
	      {
	        if (mm1 < mm2)
		  {}
		else if (mm1 == mm2)
		  {
		    if (dd1 >= dd2)
		    {}
		    else
		    {
		      yy1 = yy2;
		      mm1 = mm2;
		      dd1 = dd2;
		    }
		  }
	         else 
		 {
		   yy1 = yy2;
		   mm1 = mm2;
		   dd1 = dd2;
		 }
	      }
              else 
	      {
	        yy1 = yy2;
		mm1 = mm2;
		dd1 = dd2;
	      }	      
	    }	  
	}

	printf("%d/%d/%d is the earliest date.\n", mm1, dd1, yy1);
	return 0;

}
