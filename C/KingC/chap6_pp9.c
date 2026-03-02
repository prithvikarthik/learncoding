#include <stdio.h>

int main(void)
{
	float loan, intrate, monthpayment, balance;
	int num;

	printf("Enter the amount of loan: ");
	scanf("%f", &loan);

	printf("Enter monthly interest rate: ");
	scanf("%f", &intrate);

	printf("Enter monthly payment: ");
	scanf("%f", &monthpayment);

	printf("Enter number of payments: ");
	scanf("%d", &num);

	float monthrate = intrate / 12;

	balance = ((loan * monthrate) / 100)- monthpayment;

	for (int i = 1; i <= num; i++) 
	{
	  printf("Balance remaining after payment no.%d: %.2f\n", i, loan + balance);
	  loan += balance;
	  balance = (loan * monthrate / 100) - monthpayment;
	}

	return 0;

}
