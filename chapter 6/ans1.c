#include <stdio.h>


int cubesum(int num);

int main()
{
    int start, end, i;

    printf("Enter range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers are:\n");

    for(i = start; i <= end; i++)
    {
        if(i == cubesum(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}
int cubesum(int num)
{
    int digit, sum = 0;

    while(num > 0)
    {
        digit = num % 10;
        sum += digit * digit * digit;
        num = num / 10;
    }

    return sum;
}
