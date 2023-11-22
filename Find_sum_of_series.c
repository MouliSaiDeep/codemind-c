#include<stdio.h>
int main()
{
    int a,i;
    float b=0,c;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
      c=i;
      b=b+1/c;
    }
    printf("%.2f",b);
}