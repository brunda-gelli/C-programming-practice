#include <stdio.h>
int main()
{
    int n,i;
    printf("enter no of elements:");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int j=0;
    for(i=0;i<n;i++)
    {
        if(arr1[i]%2==0)
        {
            arr2[j]=0;
        }
        else
        {
            arr2[j]=1;
        }
        j++;
    }
    int arr3[10],arr4[10];
    int m=0,p=0;
    for(i=0;i<n;i++)
    {
        if(arr2[i]==0)
        {
            arr3[m]=arr1[i];
            m++;
        }
        else
        {
            arr4[p]=arr1[i];
            p++;
        }
    }
    for(i=0;i<p;i++)
    {
        arr3[m]=arr4[i];
        m++;
    }
    for(i=0;i<m;i++)
    {
        printf("%d ",arr3[i]);
    }
}