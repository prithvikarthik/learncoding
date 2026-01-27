#include <stdio.h>

int main(void)
{
	printf("(a) %d\n", 8 % 5);
	printf("(b) %d\n", -8 % 5);
	printf("(c) %d\n", 8 % -5);
	printf("(d) %d\n", -8 % -5);/*Not more than 1 value and has given the same output after every run(experimented on C99)*/

	return 0;
}	
