#include<stdio.h>

int main()
{
    int i;
    float f;
    double d;
    char c;

    printf("size of int : %d byte\n", sizeof(i));
    printf("size of float : %d byte\n", sizeof(f));
    printf("size of double : %d byte\n", sizeof(d));
    printf("size of char : %d byte\n", sizeof(c));

    return 0;
}