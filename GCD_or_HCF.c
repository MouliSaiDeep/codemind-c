#include<stdio.h>
int main()
{
    int a,b,i,c;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
        {
            c=i;
        }
    }
    printf("%d",c);
}