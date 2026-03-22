#include <stdio.h>

int main(void)
{
	int r = 10;
	float v1 = (4/3) * 3.14 * r * r * r;
	float v2 = (4/3.0f) * 3.14 * r * r * r;
	float v3 = (4.0f/3) * 3.14 * r * r * r;
	float v4 = (4.0f/3.0f) * 3.14 * r * r * r;
	float v5 = 4/3;
	float v6 = 4.0f/3.0f; 

	printf("Volume of a sphere with radius %d (cubic units) = %f\n",r, v1);
	printf("Volume of a sphere with radius %d (cubic units) = %f\n",r, v2);
	printf("Volume of a sphere with radius %d (cubic units) = %f\n",r, v3);
	printf("Volume of a sphere with radius %d (cubic units) = %f\n",r, v4);
	printf("%f %f/n", v5, v6);/*integer by integer always results as an integer with an truncation*/

	return 0;
}	
