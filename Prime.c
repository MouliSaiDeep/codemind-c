#include<stdio.h>
int main()
{
    int a,i,b,count=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=a%i;
        if(b==0)
        {
          count=count+1;
        }
    }
    if(count<=2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}