#include<stdio.h>
int main()
{
    int arr[50];
    int cnt[50]={0};
    for(int i=0;i<12;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<12;i++)
    {
        if(arr[i]%2==1 )
        {
            if(cnt[arr[i]]==0)
            {
                printf("%d ",arr[i]);
                cnt[arr[i]]++;
                // printf("%d\n",cnt[arr[i]]);
            }
        }
    }
    return 0;
}