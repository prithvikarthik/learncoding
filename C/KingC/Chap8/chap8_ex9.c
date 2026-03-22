#include <stdio.h>

#define days 30
#define hours 24

int main(void)
{
    printf("This program prints the average temperatures, \n  of hourly temperature readings in a month.\n");

    float temperature_readings[days][hours];
    float sum = 0;
    float count = days * hours;

    float temp = 98.6f;

    int i, j;

    for (i = 0, j = 0; i < days, j < hours; j++)
    {
        if (j == hours - 1)
        {
          temperature_readings[i][j] = temp;
          j = 0;
          i++;
           if (i == days - 1)
           {
             break;
           }    
        }
        else
        {
          temperature_readings[i][j] = temp;
        }    
    } 

    for (i = 0, j = 0; i < days, j < hours; j++)
    {
      if (j == hours - 1)
      {
        sum += temperature_readings[i][j];
        j = 0;
        i++;
         if (i == days - 1)
         {
           break;
         }
      }
      else
      {
        sum += temperature_readings[i][j]; 
      }
    }    

    float average = (float)sum / count;

    printf("Average temperature in a month: %f\n", average);

    return 0;

}
