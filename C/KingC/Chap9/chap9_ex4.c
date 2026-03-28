#include <stdio.h>

int day_of_year(int month, int day, int year)
{
    int naal = 0;

    if (year % 4 == 0 && month > 2)
    {
        naal += 1;
    }

    int count = 1;

    for (; count <= month; month++)
    {
        for (; naal < 31; naal++)
        {
            if (count < 8)
            {
                if (naal == 30)
                {
                    break;
                }
            }
            else
            {
              if (count % 2 == 0 && naal == 31)
              {
                 break;
              }
            }

            if (count == 2)
            {
                if (naal == 28)
                {
                    break;
                }
            }

            if (count == month)
            {
              if (naal == day)
              {
                return naal;
              }
            }
        }
    }     
}

int main(void)
{
    int month, day, year;

    printf("Enter the date(mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("\n");

    printf("Day of the year: %d", day_of_year(month, day, year));

    return 0;

}
