#include<stdio.h>
int main()
{
    int a=0,b=1,c,d,i;
    scanf("%d",&d);
    printf("%d %d ",a,b);
    for(i=1;i<=d-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
    printf("%d ",c);
    }
}