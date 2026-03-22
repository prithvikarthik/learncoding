#include <stdio.h>

int main(void)
{
    float resultnum, value2;
    char operator;

    printf("Enter an mathematical expression: ");
    scanf("%f", &resultnum);

    operator = getchar();

    while (operator != '\n')
    {
        scanf("%f", &value2);

        switch (operator)
        {
            case '+':
                resultnum += value2;
                break;

            case '-':
                resultnum -= value2;
                break;

            case '*':
                resultnum *= value2;
                break;

            case '/':
                resultnum /= value2;
                break;    
        }
      operator = getchar();  
    } 

    printf("Value of expression: %.1f\n", resultnum);

    return 0;
   
}
