#include <stdio.h>

int main(void)
{
	int r1c1, r1c2, r1c3, r1c4;
	int r2c1, r2c2, r2c3, r2c4;
	int r3c1, r3c2, r3c3, r3c4;
	int r4c1, r4c2, r4c3, r4c4;


	printf("Enter the numbers form 1 to 16 in any order:\n");
	scanf(	"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &r1c1, &r1c2, &r1c3, &r1c4,
			        						  &r2c1, &r2c2, &r2c3, &r2c4,
	       		         						  &r3c1, &r3c2, &r3c3, &r3c4,
			          						  &r4c1, &r4c2, &r4c3, &r4c4 );

	
         printf("%2d %2d %2d %2d\n",r1c1, r1c2, r1c3, r1c4);
	 printf("%2d %2d %2d %2d\n",r2c1, r2c2, r2c3, r2c4);
	 printf("%2d %2d %2d %2d\n",r3c1, r3c2, r3c3, r3c4);
	 printf("%2d %2d %2d %2d\n",r4c1, r4c2, r4c3, r4c4);

	 int rowsum1 = r1c1 + r1c2 + r1c3 + r1c4;
	 int rowsum2 = r2c1 + r2c2 + r2c3 + r2c4;
	 int rowsum3 = r3c1 + r3c2 + r3c3 + r3c4;
	 int rowsum4 = r4c1 + r4c2 + r4c3 + r4c4;
	 printf("Row sums: %d %d %d %d\n", rowsum1, rowsum2, rowsum3, rowsum4);

	 int colsum1 = r1c1 + r2c1 + r3c1 + r4c1;
	 int colsum2 = r1c2 + r2c2 + r3c2 + r4c2;
	 int colsum3 = r1c3 + r2c3 + r3c3 + r4c3;
	 int colsum4 = r1c4 + r2c4 + r3c4 + r4c4;
	 printf("Column sums: %d %d %d %d\n", colsum1, colsum2, colsum3, colsum4);

	 int diagsum1 = r1c1 + r2c2 + r3c3 + r4c4;
	 int diagsum2 = r1c4 + r2c3 + r3c2 + r4c1;
	 printf("Diagonl sums: %d %d\n", diagsum1, diagsum2);

	 return 0;
}	 
