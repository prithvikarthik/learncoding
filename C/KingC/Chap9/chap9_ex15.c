#include <stdio.h>

double median(double x, double y, double z)
{
    double median = 0;
    
    if (x <= y)
    {
      if (y <= z)
      {
        median = y;
      }
      else if (x <= z && median == 0)
      {
        median = z;
      }
      else 
      {
        median = x;
      }
    }

    if (z <= y && median == 0)
    {
      median = y;
    }

    if (x <= z && median == 0)
    {
      median = x;
    }

    return median;
}

int main(void)
{
    double x, y, z;

    printf("Enter 3 positive numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);

    printf("The median is %1.0lf\n", median(x, y, z));

    return 0;
}
