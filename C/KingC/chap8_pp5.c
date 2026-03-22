#include <stdio.h>

#define NUM_RATES ((int)  (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
    int low_rate, num_years, months;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);

    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");

    for (int i = 0; i < NUM_RATES; i++)
    {
      printf("%9d%%", low_rate + i);
      value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for(months = 1; months <= (num_years * 12); months++)
    {
      if (months % 12 == 0)
      {
        printf("%3d    ", months / 12);
      }

      for (int i = 0; i < NUM_RATES; i++)
      {
        value[i] += (low_rate + i) / 100.00 * value[i];
        if (months % 12 == 0)
        {
          printf("%10.2f", value[i]);
        }
      }
      if (months % 12 == 0)
      {
        printf("\n");
      }
    }

    return 0;

}
