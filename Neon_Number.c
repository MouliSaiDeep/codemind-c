#include<stdio.h>
int main()
{
    int a,b,c,sum=0;
    scanf("%d",&a);
    b=a*a;
    while(b!=0)
    {
        c=b%10;
        b=b/10;
        sum=sum+c;
    }
    if(sum==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}