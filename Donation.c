#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    if(y>x)
    {
        z=y-x;
    }
    else
    {
        z=x-y;
    }
    printf("%d",z);
}