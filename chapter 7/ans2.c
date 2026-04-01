#include<stdio.h>
int main(){
    int n,sum=0,multi=1;
    printf("enter the n");
    scanf("%d",&n);
    int a[n];4
    printf("enter numbers" );
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=1;i<n;i++){
        if(a[i]%2==0)
        {
            sum+=a[i];
        }
        else if(a[i]%2!=0){
            multi*=a[i];
        }
    }
    printf("sum of even nos is %d\n multiplication of odd nos is%d",sum,multi);
}