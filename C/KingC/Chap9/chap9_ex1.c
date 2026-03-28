#include <stdio.h>

double triangle_area(double base, double height)
{
  double product;

  product = base * height;
  return product / 2;
}

int main(void)
{
    double x, y;

    printf("Enter the base of the triangle: ");
    scanf("%lf", &x);

    printf("Enter the height of the triangle: ");
    scanf("%lf", &y);
    printf("\n");

    double area = triangle_area(x, y);

    printf("Area of the triangle: %1.0lf\n", area);

    return 0;

}
