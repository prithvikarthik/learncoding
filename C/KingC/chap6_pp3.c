/*This is Euclid's algorithm*/
#include <stdio.h>

int main(void)
{
	int m1, n1, GCD;

	printf("Enter a fraction: ");
	scanf("%d/%d", &m1, &n1);

	int m2 = m1;
	int n2 = n1;

	if (n2 == 0 || m2 == 0) {
	  printf("GCD of the numbers cannot be found.\n");
	} 

	else if (m2 == n2) {
	  printf("In lowest terms: %d\n", m2/n2);
	  return 0;
	}
	
	else if (n2 == 1) {
	  printf("In lowest terms: %d\n", m2);
	  return 0;
	}	

	while (n1 != 0) {
	  GCD = m1 % n1;
	  m1 = n1;
	  n1 = GCD;
	}

	printf("In lowest terms: %d/%d\n", (m2/m1), (n2/m1));

	return 0;

}	
