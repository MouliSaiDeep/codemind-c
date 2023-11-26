#include<stdio.h>
int main()
{
    int a,b,ld=0;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        if(b>ld)
        {
            ld=b;
        }
        
    }
    printf("%d",ld);
}