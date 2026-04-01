#include<stdio.h>
int main()
{
    int k,l;
    printf("enter the number of row and column");
    scanf("%d%d",&k,&l );

    int a[k][l],arr[k*l];

    printf("Enter  elements:\n");
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<l;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<l;j++)
        {
           arr[i*l+j]=a[i][j];

        }
    }
    
        for(int j=0;j<l*k;j++)
        {
             printf(" %d",arr[j]);
        }
    }
   
