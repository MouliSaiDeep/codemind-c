#include<stdio.h>
int main()
{
    int a,b,i,m,n;
    scanf("%d%d%d",&a,&m,&n);
    for(i=m;i<=n;i++)
    {
        b=a*i;
        printf("%d x %d = %d
",a,i,b);
    }
}