#include<stdio.h>
int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            count=1;
            break;
        }
        else
        {
            count=0;
        }
    }
    if(count==1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}