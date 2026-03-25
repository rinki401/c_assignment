#include <stdio.h>

int main()
{
    int num, a = 0, b = 1, c;

    printf("Enter a number: ");
    scanf("%d", &num);


    if(num == 0 || num == 1)
    {
        printf("It is a Fibonacci number");
        return 0;
    }

    c = a + b;

    while(c <= num)
    {
        if(c == num)
        {
            printf("It is a Fibonacci number");
            return 0;
        }

        a = b;
        b = c;
        c = a + b;
    }

    printf("It is NOT a Fibonacci number");

    return 0;
}
