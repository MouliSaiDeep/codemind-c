#include<stdio.h>
void even(int a[],int n)
{
    int end,start,count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            start=i;
            break;
        }
    }
    for(int i=n-1;i>0;i++)
    {
        if(a[i]%2!=0)
        {
            end=i;
            break;
        }
    }
    if(start==-1||end==-1)
    {
        printf("0");
    }
    for(int i=start+1;i<end;i++)
    {
        if(a[i]%2==0)
        {
            count=count+1;
        }
    }
    printf("%d",count);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    even(arr,n);
    return 0;
}