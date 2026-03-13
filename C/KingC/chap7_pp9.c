#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hr;
    char mn1, mn2;
    char t, m;

    printf("Enter the time in 12-hour clock format: ");
    scanf("%d:%1c%1c %c%c", &hr, &mn1, &mn2, &t, &m);

    if (toupper(t) == 'A' || t == 'a')
    {
      printf("Your time in 24-hour clock format: %d:%1c%1c\n", hr, mn1, mn2);
    }

    else if (toupper(t) == 'P' || t == 'p')
    {
      printf("Your time in 24-hour clock format: %d:%1c%1c\n", (hr + 12), mn1, mn2);
    }

    return 0;
}
