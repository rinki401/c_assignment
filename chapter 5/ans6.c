#include <stdio.h>

int main()
{
    int num, digit;
    int even_sum = 0;
    int odd_mul = 1;

    printf("Enter a 6-digit number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        digit = num % 10;   // last digit nikalna

        if(digit % 2 == 0)
        {
            even_sum = even_sum + digit;
        }
        else
        {
            odd_mul = odd_mul * digit;
        }

        num = num / 10;   // next digit ke liye
    }

    printf("Sum of even digits = %d\n", even_sum);
    printf("Multiplication of odd digits = %d", odd_mul);

    return 0;
}
