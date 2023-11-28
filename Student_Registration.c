#include<stdio.h>
int main()
{
    int n,k,m,p,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&n,&m,&k);
        p=m-k;
        if(n<=p)
        {
            printf("YES
");
        }
        else 
        {
            printf("NO
");
        }
    }
}