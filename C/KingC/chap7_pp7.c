#include <stdio.h>

int main(void)
{
    char operation;
    printf("This program adds, subtracts, multiplies or divides any two given two fractions.\n");

    int num1, denom1, num2, denom2, resultnum, resultdenom;

    printf("Enter the two fractions(with the operator): ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &operation, &num2, &denom2);

    if (operation != '\n')
    {
      if (operation == '+')
      {
        resultnum = num1 * denom2 + num2 * denom1;
        resultdenom = denom1 * denom2;
        printf("The sum of the two fractions are %d/%d\n", resultnum, resultdenom);
        return 0; 
      }
      else if (operation == '-')
      {
        resultnum = num1 * denom2 - num2 * denom1;
        resultdenom = denom1 * denom2;
        printf("The difference of the two fractions are %d/%d\n", resultnum, resultdenom);
        return 0;
      }
      else if (operation == '*')
      {
        resultnum = num1 * num2;
        resultdenom = denom1 * denom2;
        printf("The difference of the two fractions are %d/%d\n", resultnum, resultdenom);
        return 0;
      }
      else if (operation == '/')
      {
        resultnum = num1 * denom2;
        resultdenom = denom1 * num2;
        printf("The difference of the two fractions are %d/%d\n", resultnum, resultdenom);
        return 0;
      }
    }

    return 0;
}
