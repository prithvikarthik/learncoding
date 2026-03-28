#include <stdio.h>
#include <stdbool.h>

bool check(int num1, int num2, int scope)
{
    if (num1 >= 0 && num1 <= scope - 1 && num2 >= 0 && num2 <= scope - 1)
    {
      return true;
    }
    else
    {
      return false;
    }
}

int main(void)
{
    int x, y, n;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    printf("Enter the scope you want to check till: ");
    scanf("%d", &n);

    bool store = check(x, y, n);

    if (store)
    {
      printf("True(1)\n");
    }
    else
    {
      printf("False(0)\n");
    }

    return 0;

}


