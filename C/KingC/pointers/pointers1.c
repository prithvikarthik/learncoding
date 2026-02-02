#include <stdio.h>

int main(void)
{
	int v = 1;

	printf("The value of v is %d\n", v);
	int *ptr = &v;

	printf("The value of ptr is %p\n", ptr);/*this prints the address of v (pointer variable)*/
	printf("The value pointed by ptr is %d\n", *ptr);

	char a = '9';
	char *p = &a;

	printf("The value pointed by p is %c\n", *p);

	return 0;

}	
