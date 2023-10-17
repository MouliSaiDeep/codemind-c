#include<stdio.h>
int main()
{
int u;

float c,b,s,t;
 scanf("%d",&u); 
if(u>=800)
{
c=2.00;
} 
else if(u>=600)
{
c=1.80;
}
else if(u>=400)
{
c=1.60;
}
else if(u>=200)
{
c=1.40;
}
 else
{
c=1.20;
}
b=u*c;

if(b>400)
{
  s=b*0.15;
}
t=b+s;
printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,c,b,s,t);
return 0;
}