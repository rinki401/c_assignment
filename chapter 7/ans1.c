#include<stdio.h>
int main(){
   int n,max,min;
    printf("enter the n");
    scanf("%d",&n);
    int a[n];
    printf("enter numbers" );
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("sum of min & max is %d",min+max);
}