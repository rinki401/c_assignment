#include<stdio.h>

int main()
{
    int k,l;
    printf("Enter rows and columns: ");
    scanf("%d%d",&k,&l);

    int a[k][l], arr[k*l];

    printf("Enter elements:\n");
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<l;j++)
        {
            scanf("%d",&a[i][j]);
            arr[i*l + j] = a[i][j];  
        }
    }

   
    for(int i=0;i<k*l-1;i++)
    {
        for(int j=0;j<k*l-1-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }

    int flag = 1;

    for(int i=0;i<k*l-1;i++)
    {
        if(arr[i] == arr[i+1])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Distinct");
    else
        printf("Not distinct");
}