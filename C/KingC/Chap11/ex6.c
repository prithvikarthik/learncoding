#include <stdio.h>

int find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    *largest = a[0];
    *second_largest = a[1];
    for(int i = 1; i < n; i++)
    {
        if(*largest < a[i])
        {
            *second_largest = *largest;
            *largest = a[i];
        }
        else if(*second_largest < a[i])
        {
            *second_largest = a[i];
        }
    }

    return 0;
}

int main(void)
{
    int array[] = {1, 3, 2, 2}; // all same; only one number; only 2 numbers; multiple numbers;
    int largest, second_largest;
    int Return_code = find_two_largest(array, sizeof(array)/sizeof(array[0]), &largest, &second_largest);
    if(Return_code)
    {
       return Return_code;
    }
    else
    {
       printf("Largest = %d, second largest = %d\n" ,largest, second_largest);
    }

    return 0;
}    
