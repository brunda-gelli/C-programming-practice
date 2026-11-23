#include <stdio.h>
int main()
{
    int n,i,j,temp;
    printf("enter no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n-1-i;j++)
        {
            if(arr[i]>arr[j+1])
            {
                temp=arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    if(arr[0]>=0)
    {
        printf("no pairs");
    }
    else
    {
    for(i=0;i<n;i++)
    {
        for(j=i;j<n-1;j++)
        {
            if(arr[j+1]==-arr[i])
            {
                printf("(%d,%d)",arr[i],arr[j+1]);
            }
        }
        
    }
    }
}
