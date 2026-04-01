#include<stdio.h>

int main()
{
    int k,l;
    printf("Enter rows and columns: ");
    scanf("%d%d",&k,&l);

    int a[k][l] ;

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
    for(int j=0;j<l/2;j++)
    {
        int t = a[i][j];
        a[i][j] = a[i][l-j-1];
        a[i][l-j-1] = t;
    }
}
}