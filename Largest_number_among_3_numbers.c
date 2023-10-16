#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(y>x&&y>z)
    {
        printf("%d",y);
    }
    else if(x>y&&x>z)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",z);
    }
}