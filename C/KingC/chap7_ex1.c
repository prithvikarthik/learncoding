#include <stdio.h>

int main(void)
{
    int a, b, c;

    a = 077;
    b = 0x77;
    c = 0XABC;

    printf("(a) %d\n(b) %d\n(c) %d\n", a, b,c);

    return 0;
}
