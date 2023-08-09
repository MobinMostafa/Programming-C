// trvojer cetrofol nernay algoritham = (2/1) * base * height

#include<stdio.h>

int main()
{
    float base, height, area;
    printf("Enter base = ");
    scanf("%f", &base);
    printf("Enter height = ");
    scanf("%f", &height);
    area = 0.5 * base * height;
    printf("The area of triangle = %.3f\n", area);
    return 0;
}