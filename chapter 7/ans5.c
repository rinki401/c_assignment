#include<stdio.h>
int main()
{
    int n,a[10]={4,5,7,8,9,6,1,2,3,48} ;
    printf("enter n");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        int k=a[9];
        
        for(int j=9;j>0;j--)
        {
            
            a[j]=a[j-1];

        }
        a[0]=k;
        
    } 
     for(int i=0;i<10;i++)
    {
        printf("%d   ",a[i]);
    }
}