
#include <stdio.h>

int main()
{
    int n,i;
    printf("enter no of characters:");
    scanf("%d",&n);
    getchar();
    char s[n+1];
    printf("enter string:");
    fgets(s,n+1,stdin);
    for(i=0;i<n;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        else if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c",s[i]);
    }
}
