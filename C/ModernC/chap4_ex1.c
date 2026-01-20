#include <stdio.h>

int main(void)
{

	int i1 = 5;
	int j1 = 3;
	printf("(a) %d %d\n", i1 / j1, i1 % j1);/*this is to see the result of these program fragments(small runs of commands with operators)*/

	int i2 = 2;
	int j2 = 3;
	printf("(b) %d\n", (i2 + 10) % j2);

	int i3 = 7;
	int j3 = 3;
	int k3 = 9;
	printf("(c) %d\n", (i3 + 10) % k3 / j3);

	int i4 = 1;
	int j4 = 2;
	int k4 = 3;
	printf("(d) %d\n", (i4 + 5) % (j4 + 2) / k4);

	return 0;
}
