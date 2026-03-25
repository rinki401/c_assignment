#include <stdio.h>

int mult(int a, int b);
int quo(int a, int b);
int rem(int a, int b);
int i;
int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if(b == 0)
    {
        printf("Division by zero not allowed");
        return 0;
    }

    printf("Product = %d\n", mult(a, b));
    printf("Quotient = %d\n", quo(a, b));
    printf("Remainder = %d\n", rem(a, b));

    return 0;
}

int mult(int a, int b)
{
    int result = 0, sign = 1;

    if(b < 0)
    {
        b = -b;
        sign = -sign;
    }

    if(a < 0)
    {
        a = -a;
        sign = -sign;
    }

    for(i = 0; i < b; i++)
        result += a;

    return sign * result;
}

int quo(int a, int b)
{
    int count = 0, sign = 1;

    if(a < 0)
    {
        a = -a;
        sign = -sign;
    }

    if(b < 0)
    {
        b = -b;
        sign = -sign;
    }

    while(a >= b)
    {
        a -= b;
        count++;
    }

    return sign * count;
}

int rem(int a, int b)
{
    if(a < 0)
        a = -a;

    if(b < 0)
        b = -b;

    while(a >= b)
        a -= b;

    return a;
}
