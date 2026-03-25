#include <stdio.h>

int sumdiv(int num);

int main()
{
    int start, end, i;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    printf("Perfect numbers are:\n");

    for(i = start; i <= end; i++)
    {
        if(sumdiv(i) == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
int sumdiv(int num)
{
    int i, sum = 0;

    for(i = 1; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }

    return sum;
}
