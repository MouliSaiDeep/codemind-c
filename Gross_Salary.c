#include<stdio.h>
int main()
{
    int b,d,h;
     float g;
     scanf("%d",&b);
     if(b<=10000)
     {
         d=b*0.80;
         h=b*0.20;
     }
     else if(b<=20000)
     {
         d=b*0.90;
         h=b*0.25;
     }
     else
     {
         d=b*0.95;
         h=b*0.30;
     }
     g=b+h+d;
     printf("%.2f",g);
}