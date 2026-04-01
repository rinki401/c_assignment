#include<stdio.h>
int main()
{
    int k,l,count=0,n;
    printf("enter n");
    scanf("%d",&n );

    int a[n];

    printf("Enter  elements:\n");
    for(int i=0;i<n;i++)
    {
       
            scanf("%d",&a[i]);
        
    }
    for(int i=0;i<n;i++)
    { 
        for(int j=i+1;j<n;j++)
        {
           if(a[i]==a[j]){
            count++;
            break;
           }

        }
    }
    
       if(count!=0)
        {
             printf(" not distnct");
        }
    }
   
