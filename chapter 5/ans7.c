#include <stdio.h>

int main()
{
    int x, y, i;
    int result = 1;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter power (y): ");
    scanf("%d", &y);

    for(i = 1; i <= y; i++)
    {
        result = result * x;
    }

    printf("%d raised to the power %d = %d", x, y, result);

    return 0;
}
