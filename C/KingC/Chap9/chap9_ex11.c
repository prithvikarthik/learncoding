#include <stdio.h>

#define LENGTH 5

float compute_GPA(int n, char grades[n])
{
    float avgsum;

    for (int i = 0; i < n; i++)
    {
      avgsum += i;
    }

    return avgsum / n;
}

int main(void)
{
    int n = LENGTH;

    char grades[n];

    char c = 'a';

    for (int i = 4; i >= 0; i--)
    {
      grades[i] = c;
      c += '\1';
    }

    printf("Average of you grades is %1.0f\n", compute_GPA(n, grades));

    return 0;
}
