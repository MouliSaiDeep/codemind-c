#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%2==1)
    {
        printf("weird");
    }
    else if(x%2==0&&2<=x&&x<=5)
    {
        printf("not weird");
    }
    else if(x%2==0&&6<=x&&x<=2)
    {
        printf("weird");
    }
    else
    {
        printf("not weird");
    }
}