#include<stdio.h>
int main()
{
    int n,i,arr[n],pos;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            pos=i;
        }
        
    }
    printf("%d ",pos);
}