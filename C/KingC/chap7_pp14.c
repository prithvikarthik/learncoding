#include <stdio.h>

int main(void)
{
    long double x;
    long double y = 1;

    printf("Enter a positive integer: ");
    scanf("%Lf", &x);

    if (x == 1)
    {
      y = 1;
      printf("The square root of the integer: %Lf", y);
    }    

    else 
    {
      for (int i = 1; (y * y) - x > 0, i <= 5; i++)
      {
        y = (y + (x / y)) / 2.0f;
      }   

      printf("The square root of the integer: %Lf\n", y); 
    }

    return 0;

}    
