#include<stdio.h>
int main()
{
    int n,t,r,q;
    scanf("%d",&n);
    q=n%10;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
    }
    t=q+r;
    printf("%d",t);
}