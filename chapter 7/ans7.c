#include<stdio.h>
int main()
{
    int n,k,l,count=0;
    printf("enter the number,number of row and column");
    scanf("%d%d%d",&n,&k,&l );

    int a[k][l];

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
            if(n==a[i][j]){
                count++;
            }

        }
    }
    printf("occurence is %d",count);
}