#include<stdio.h>
int main()
{
    int n,i,flag=0,s,avg;
    scanf("%d",&n);
    int arr[n],sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        avg=sum/n;
    scanf("%d",&s);
        if(avg==s)
        {
            flag=1;
            break;
        }
    }
    
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}