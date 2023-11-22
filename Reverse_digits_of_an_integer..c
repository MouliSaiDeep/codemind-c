#include<stdio.h>
int main()
{
    int a,b,n=0,t;
    scanf("%d",&a);
    t=a;
    while(a!=0)
    {
        b=a%10;
        n=n*10+b;
        a=a/10;
    }
    printf("%d",n);
}