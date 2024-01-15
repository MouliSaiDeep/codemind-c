#include<stdio.h>
int main()
{
    int n,i,avg,count=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg<=arr[i])
        {
            count=count+1;
        }
    }
    printf("%d",count);
}