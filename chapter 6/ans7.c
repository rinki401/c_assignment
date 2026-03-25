#include <stdio.h>

int mult(int a, int b);
int quo(int a, int b);
int rem(int a, int b);

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Product = %d\n", mult(a, b));
    printf("Quotient = %d\n", quo(a, b));
    printf("Remainder = %d\n", rem(a, b));

    return 0;
}

int mult(int a, int b)
{
    int i, result = 0;
    for(i = 0; i < b; i++)
    {
        result += a;
    }
    return result;
}

int quo(int a, int b)
{
    int count = 0;
    while(a >= b)
    {
        a -= b;
        count++;
    }
    return count;
}

int rem(int a, int b)
{
    while(a >= b)
    {
        a -= b;
    }
    return a;
}
