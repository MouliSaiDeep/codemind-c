#include<stdio.h>
int main()
{
    int a,b,c=0,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%3==0)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}