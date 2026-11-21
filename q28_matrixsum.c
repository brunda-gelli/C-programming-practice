#include <stdio.h>
int main()
{
    int i,j,k,n,sum=0;
    int r1,c1,r2,c2;
    printf("enter i,j:");
    scanf("%d %d",&i,&j);
    int arr[i][j];
    printf("enter elements:");
    for(k=0;k<i;k++)
    {
        for(n=0;n<j;n++)
        {
            scanf("%d",&arr[k][n]);
        }
    }
    printf("enter r1 c1 r2 c2 for summation:");
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    for(k=r1;k<=r2;k++)
    {
        for(n=c1;n<=c2;n++)
        {
            sum+=arr[k][n];
        }
    }
    printf("sum:%d",sum);
    
    
}
