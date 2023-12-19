#include<stdio.h>
int main()
{
    int n,i,num;
    scanf("%d",&n);
    int m[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
    for(i=0;i<n;i++)
    {
        if(m[i]%2==1)
        {
            num=m[i];
        }
    }
    printf("%d",num);
}