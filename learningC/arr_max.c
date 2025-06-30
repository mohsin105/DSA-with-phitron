#include<stdio.h>
int main()
{
    int arr[8]={5,9,7,12,35,6,8};
    int mx=0;
    for(int i=0;i<8;i++)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
        }
    }
    printf("%d",mx);
    return 0;
}