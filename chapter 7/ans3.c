#include<stdio.h>
int main()
{
    int a[5]={1,2,4,8,6};
    for(int i=0;i<5;i++)
    {
        int j=i,t=0;
        while(j>0 && a[j]<a[j-1])
        {
             t=a[j];
             a[j]=a[j-1];
             a[j-1]=t;
             j--;
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d   ",a[i]);
    }
}