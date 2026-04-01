#include<stdio.h>
int main()
{   
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int i,j,minindex=0,temp=0,a[n];
    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n-1;i++){
        minindex=i;
        for(j=i+1;j<n;j++)        {
            if(a[minindex]>a[j])
            {
               minindex=j;
            }
        }
         temp=a[i];
                a[i]=a[minindex];
                a[minindex]=temp;
        
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}