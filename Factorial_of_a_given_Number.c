#include<stdio.h>
int fact(int);
int main()
{
    int n,x;
    scanf("%d",&n);
    x=fact(n);
    printf("%d",x);
    return 0;
}
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return (n*fact(n-1));
}