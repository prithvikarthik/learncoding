#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char surname[20] = {};
    int i = 0;
    int letter;

    printf("Enter a first name and a last name: ");

    char firstname;

    firstname = toupper(getchar());

    char aftername;

    while (aftername != ' ')
    {
       aftername = getchar();
    }

    surname[0] = getchar();

    while (surname[i] != '\n')
    {
        if (surname[i] != '\n')
        {
          surname[++i] = getchar();
        }
    }

    printf("You entered the name: ");

    for (int letter = 0; letter < i; letter++)
    {
      printf("%c", surname[letter]);
    }

    printf(", %c\n", firstname);

    return 0;

}
