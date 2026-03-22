#include <stdio.h>

int main(void)
{
	int num;

	printf("Enter a integer: ");
	scanf("%d", &num);

	printf("Your number in reverse: ");
	do {
	  printf("%d", num % 10);
	  num = num / 10;
	} while (num != 0);
	printf("\n");

	return 0;
}
