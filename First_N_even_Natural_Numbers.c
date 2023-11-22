#include<stdio.h>
int main()
{
    int n,i,b;
    scanf("%d",&n);
    b=n*2;
    for(i=b;i>=1;i--)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}