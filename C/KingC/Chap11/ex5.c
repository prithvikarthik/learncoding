#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / (60 * 60);
    *min = (total_sec / 60) % 60;
    *sec = total_sec % 60;
}

int main(void)
{
    printf("Enter the number of seconds till midnight.\n");
    long total_sec;
    int hr, min, sec;

    scanf("%ld", &total_sec);
    split_time(total_sec, &hr, &min, &sec);

    printf("The time is, %d:%d:%d\n", hr, min, sec);

    return 0;
}
