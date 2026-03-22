#include <stdio.h>

int main(void)
{
	int x, y;
	printf("(a:1) give an integer(without a space ):");
	scanf("%d", &x);
	printf("%d\n", x);

	printf("(a:2) give the same integer(with a space before it):");
	scanf(" %d", &y);
	printf("%d\n\n", y);/*both strings in (a) are equivalent*/


	int a, b, c, d, e, f;
	printf("(b:1), give three integers(give a '-' in between each of them , leave no spaces):");
	scanf("%d-%d-%d", &a, &b, &c);
	printf("%d %d %d\n", a, b, c);

	printf("(b:2), give the same integers(do the same thing from (b:1), but leave a space before the '-' this time):");
	scanf("%d -%d -%d", &d, &e, &f);
	printf("%d %d %d\n\n", d, e, f);/*both strings in (b) are equivalent*/


//	float p, q;
//	printf("(c:1), give a float(without a space):");
//	scanf("%f", &p);
//	printf("%f\n", p);
//
//	printf("(c:2), give the same float(with a space after it):");
//	scanf("%f ", &q);
//	printf("%f\n\n", q);/*both strings in (c) are equivalent*/


	float l, m, n, o;
	printf("(d:1), give two floats(with a ',' and a space between them):");
	scanf("%f, %f", &l, &m);
	printf("%f, %f\n", l, m);

	printf("(d:2), give the same floats(do the same thing from (d:1),just give an extra space after the first space):");
	scanf("%f,  %f", &n, &o);
	printf("%f, %f\n", n, o);

	return 0;

}	
