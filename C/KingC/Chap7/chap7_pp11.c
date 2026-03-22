#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char name, storeletter;

    printf("Enter a name(full name)");
    name = getchar();

    while (name != '\n')
    {
      name = getchar();

      if (name != ' ')
      {
        storeletter = toupper(name);
        break;
      }

    }

    while (name != '\n')
    {
      name = getchar();
      if (name == ' ')
      {
        break;
      }    
    }

    name = getchar();

    while (name != ' ' && name != '\n')
    {
      putchar(name);
      name = getchar(); 
    }

    printf(", %c\n", storeletter);

    return 0;

}    

