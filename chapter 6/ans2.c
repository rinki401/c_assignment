#include <stdio.h>

int digitProduct(int num);
int pers(int num);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Persistence = %d", pers(num));

    return 0;
}

int digitProduct(int num)
{
    int digit, product = 1;

    while(num > 0)
    {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }

    return product;
}

int pers(int num)
{
    int count = 0;

    while(num >= 10)
    {
        num = digitProduct(num);
        count++;
    }

    return count;
}
