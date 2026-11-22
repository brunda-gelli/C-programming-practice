#include <stdio.h>
int main()
{
    int n,temp1,i,j,k;
    printf("enter no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter k:");
    scanf("%d",&k);
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp1=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp1;
            }
        }
    }
    int temp[n];
    for(i=0;i<n;i++)
    {
        temp[i]=arr[i];
    }
    int x,m,r,temp2,diff,p=0,arr2[100];
        for(i=1;i<=n;i++)
        {
            int count=0;
            for(j=0;j<n;j++)
            {
                arr[j]=temp[j];
                if(j<i)
                {
                    arr[j]+=k;
                }
                else
                {
                    arr[j]-=k;
                }
            }
                for(x=0;x<n;x++)
                {
                    if(arr[x]<0)
                    {
                        count++;
                    }
                }
                if(count==0)
                {
                    for(m=1;m<n;m++)
                    {
                        for(r=0;r<n-m;r++)
                        {
                            if(arr[r]>arr[r+1])
                            {
                                temp2=arr[r];
                                arr[r]=arr[r+1];
                                arr[r+1]=temp2;
                            }
                        }
                    }
                    diff=arr[n-1]-arr[0];
                    arr2[p]=diff;
                    p++;
                    
                }
        }
        for(m=1;m<n;m++)
        {
            for(r=0;r<p-m;r++)
            {
                if(arr2[r]>arr2[r+1])
                {
                    temp2=arr2[r];
                    arr2[r]=arr2[r+1];
                    arr2[r+1]=temp2;
                }
            }
        }
        if(p==0)
        {
            printf("no valid possibility ");
        }
        else
        {
        printf("%d",arr2[0]);
        }
}

