#include<stdio.h>

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int a[n][n];
    int sum1 = 0, sum2 = 0;

    printf("Enter elements");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        sum1 += a[i][i];          
        sum2 += a[i][n-1-i];       
    }

    printf("Principal diagonal sum = %d\n", sum1);
    printf("Secondary diagonal sum = %d\n", sum2);
}