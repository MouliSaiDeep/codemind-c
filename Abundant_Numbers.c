#include<stdio.h>
int main()
{
    int a,i,c=0,d;
    scanf("%d",&a);
    d=a;
   for(i=1;i<a;i++)
   {
       if(a%i==0)
       {
           c=c+i;
       }
   }
    if(c<d)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}