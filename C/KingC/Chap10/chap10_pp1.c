#include <stdio.h>
#include <stdbool.h>

int top = 0;
char contents[100] = {};

bool empty(void);
void push(char c);
char pop(void);

int main(void)
{
    printf("Enter parentheses and or/braces: ");
    char c, c2;
    while((c = getchar()) != '\n')
    {
        if(c == '(' || c == '{')
            push(c);
        else
        {
            if(c == '}' && (c2 == pop()) == '(')
                break;
            push(c2);
            if(c == ')' && (c2 == pop()) == '{')
                break;
            push(c2);
            pop();
        }
    }
    if(empty())
        printf("parentheses and braces are nested properly.\n");
    else
        printf("parentheses and braces are not nested properly.\n");

    return 0;
}

bool empty(void)
{
    return top <= 0;
}
void push(char c)
{
      if(top >= 99)
      {
          printf("Stack overflow!\n");
          return;
      }
      contents[top++] = c;
}
 
char pop(void)
{
      if(top < 0)
          return '\0';
      return contents[top -= 2];
}

