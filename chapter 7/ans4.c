#include<stdio.h>
int main()
{
    int n,t,a[10]={4,5,7,8,9,6,1,2,3,48} ;
    printf("enter n");
    scanf("%d",&n);
    for(int i=0;i<n/2;i++)
    {
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    } 
     for(int i=0;i<10;i++)
    {
        printf("%d   ",a[i]);
    }
}