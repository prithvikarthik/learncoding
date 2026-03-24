#include <stdio.h>

int main(void)
{
    char phonenumber[15] = {'0'};

    printf("Enter your alphabetical phone-number: ");

    int i;

    for (i = 0; i < 15; i++)
    {
        phonenumber[i] = getchar();

        if (phonenumber[i] != '\n')
        {
          if (i == 0)
          {
            printf("In numeric form: ");
          }
            switch (phonenumber[i])
            {
                case 'A':
                case 'B':
                case 'C':
                    putchar('2');
                    break;

                case 'D':
                case 'E':
                case 'F':
                    putchar('3');
                    break;    

                case 'G':
                case 'H':
                case 'I':
                    putchar('4');
                    break;

                case 'J':
                case 'K':
                case 'L':
                    putchar('5');
                    break;

                case 'M':
                case 'N':
                case 'O':
                    putchar('6');
                    break;

                case 'P':
                case 'R':
                case 'S':
                    putchar('7');
                    break;

                case 'T':
                case 'U':
                case 'V':
                    putchar('8');
                    break;

                case 'W':
                case 'X':
                case 'Y':
                    putchar('9');

                default:
                    putchar(phonenumber[i]);
                    break;
            }
        }
    }
    
    printf("\n");

    return 0;

}
