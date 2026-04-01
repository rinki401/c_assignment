#include<stdio.h>

int main()
{
    int k,l;
    printf("Enter rows and columns: ");
    scanf("%d%d",&k,&l);

    int a[k][l];

    printf("Enter elements:\n");
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<l;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

 
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<l-1;j++)
        {
            for(int m=0;m<l-j-1;m++)
            {
                if(a[i][m] > a[i][m+1])
                {
                    int t = a[i][m];
                    a[i][m] = a[i][m+1];
                    a[i][m+1] = t;
                }
            }
        }
    }

    printf("\nRow-wise sorted matrix:\n");
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<l;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

   
    for(int j=0;j<l;j++)
    {
        for(int i=0;i<k-1;i++)
        {
            for(int m=0;m<k-i-1;m++)
            {
                if(a[m][j] > a[m+1][j])
                {
                    int t = a[m][j];
                    a[m][j] = a[m+1][j];
                    a[m+1][j] = t;
                }
            }
        }
    }

    printf("\nColumn-wise sorted matrix:\n");
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<l;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}