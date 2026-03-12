#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hr, mn;
    char t, m;

    printf("Enter the time in 12-hour clock format: ");
    scanf("%2d:%2d %c%c", &hr, &mn, &t, &m);

    if (toupper(t) == 'A' || t == 'a')
    {
      printf("Your time in 24-hour clock format: %2d:%2d\n", hr, mn);
    }

    else if (toupper(t) == 'P' || t == 'p')
    {
      printf("Your time in 24-hour clock format: %2d:%2d\n", (hr + 12), mn);
    }

    return 0;
}
