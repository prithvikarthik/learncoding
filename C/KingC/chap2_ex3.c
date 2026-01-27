#include <stdio.h>

int main(void)
{
	int height = 8, length = 12, width = 10;
	int volume = height * length * width;

	printf("Dimensions: %d*%d*%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensonal weight (pounds): %d\n", (volume + 165) / 166);/*we written this after the format string, because we want the number to be
									   rounded off rather than truncating it.*/

	return 0;
}	
