#include<stdio.h>

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int a[n][n];
    printf("Enter elements:\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int s = 0, sum;

   
    for(int j=0;j<n;j++)
        s += a[0][j];

    int flag = 0;

    
    for(int i=0;i<n;i++)
    {
        sum = 0;
        for(int j=0;j<n;j++)
            sum += a[i][j];

        if(sum != s)
        {
            flag = 1;
            break;
        }
    }

  
    for(int i=0;i<n && flag==0;i++)
    {
        sum = 0;
        for(int j=0;j<n;j++)
            sum += a[j][i];

        if(sum != s)
        {
            flag = 1;
            break;
        }
    }

  
    sum = 0;
    for(int i=0;i<n;i++)
        sum += a[i][i];

    if(sum != s)
        flag = 1;

   
    sum = 0;
    for(int i=0;i<n;i++)
        sum += a[i][n-i-1];

    if(sum != s)
        flag = 1;

    if(flag == 0)
        printf("Magic Matrix");
    else
        printf("Not Magic Matrix");
}