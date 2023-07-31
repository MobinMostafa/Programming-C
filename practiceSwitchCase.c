#include<stdio.h>

int main()
{
    int day =7;
    switch (day)
    {
    case 1:
        printf("Today is Saturday");
        break;
    case 2:
        printf("Today is Sunday");
        break;
    case 3:
        printf("Today is Monday");
        break;
    case 4: 
         printf("Today is Tuesday");
         break;
    case 5:
         printf("Today is Wednesday");
         break;
    case 6:
         printf("Today is Thursday");
         break;
    case 7:
         printf("Today is Friday");
         break;
    default:
        printf("Looking forward to the weekend");
    }
    return 0;
}