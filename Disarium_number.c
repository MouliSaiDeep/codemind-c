#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,temp,sum,term=0,n1,n2;
    scanf("%d",&n);
    n1=n;
    n2=n;
    while(n!=0)
    {
        temp=n%10;
        n=n/10;
        term=term+1;
    }
    int rem,tot=0,b;
    while(n1!=0)
    {
    for(i=term;i>=1;i--)
    {
        rem=n1%10;
        b=pow(rem,i);
        n1=n1/10;
        tot=tot+b;
    }
     if(tot==n2)
     printf("True");
     else
     printf("False");
    }
}