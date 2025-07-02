#include<stdio.h>
int find_min(int *ar,int n)
{
  int min=100001;
  for(int i=0;i<n;i++)
    {
      if(min>ar[i])
      {
        min=ar[i];
      }
    }
  return min;
}
int find_max(int *arm,int m)
{
  int max=0;
  for(int i=0;i<m;i++)
    {
      if(max<arm[i])
      {
        max=arm[i];
      }
    }
  return max;
}
int main()
{
  int N;
  scanf("%d",&N);
  int arr[N];
  for(int i=0;i<N;i++)
    {
      scanf("%d",&arr[i]);
    }
  int min=find_min(arr,N),max=find_max(arr,N);
  printf("%d %d",min,max);
  return 0;
}