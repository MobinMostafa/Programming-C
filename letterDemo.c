#include<stdio.h>

int main()
{
    char lower, upper;
    printf("Enter lower latter : ");
    scanf("%c",&lower);
    upper = toupper(lower);
    printf("The upper latter is = %c",upper);
    return 0;
}