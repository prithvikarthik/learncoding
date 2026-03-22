#include <stdio.h>

int main(void)
{
	int t1, t2;

	printf("Enter a 24-hour time(we will find the closest departure time of a flight): ");
	scanf("%d:%d", t1, t2);

	int time = (t1 * 60) + t2;

	int dp1 = (8 * 60) + 0; int ar1 = (10 * 60) + 16;
	int dp2 = (9 * 60) + 43; int ar2 = (11 * 60) + 52;
	int dp3 = (11 * 60) + 19; int ar3 = (13 * 60) + 31;
	int dp4 = (12 * 60) + 47; int ar4 = (15 * 60) + 0;
	int dp5 = (14 * 60) + 0; int ar5 = (16 * 60) + 8;
	int dp6 = (15 * 60) + 45; int ar6 = (17 * 60) + 55;
	int dp7 = (19 * 60) + 0; int ar7 = (21 * 60) + 20;
	int dp8 = (21 * 60) + 45; int ar8 = (23 * 60) + 58;

	if ()


}	
