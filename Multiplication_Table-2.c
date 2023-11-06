#include<stdio.h>
int main()
{
    int a,b,i,n;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        b=a*i;
        printf("%d x %d = %d
",a,i,b);
    }
}