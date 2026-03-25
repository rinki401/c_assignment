#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i == 2)
            sum += 1.0 / 2;
        else
            sum += 1.0 / (i * i);
    }

    printf("Sum = %f", sum);

    return 0;
}
