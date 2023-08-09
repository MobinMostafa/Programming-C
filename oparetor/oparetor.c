#include<stdio.h>

int main()
{
    int num1,num2,sum, avg;
    printf("Enter two numbers : ");
    scanf("%d  %d", &num1, &num2);
    sum = num1 + num2;

    printf("The sum is = %d\n", sum);
    
    avg = sum/2;

    printf("The avarage number is = %d", avg);

    return 0;

}
