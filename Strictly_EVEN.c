#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==1&&arr[i]%2==0)
        {
            count=1;
            break;
        }
        else
        {
            count=0;
        }
    }
    if(count==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}