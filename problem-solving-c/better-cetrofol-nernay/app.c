// radius roll = 3.1412 * radius * radius

#include<stdio.h>
#include<math.h>

int main()
{
    float radius,area;
    printf("Enter radius = ");
    scanf("%f", &radius);

    area = M_PI * radius * radius;

    printf("Area of circle is =  %.2f\n", area);
    return 0;
}