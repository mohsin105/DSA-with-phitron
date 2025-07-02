#include<stdio.h>
int max(int a[],int n,int maximum,int i)
{
  if(i==n)
  {
    return maximum;
  }
  if(a[i]>maximum)
  {
    maximum=a[i];
  }
  int mxm=max(a,n,maximum,i+1);
  return mxm;
}
int main()
{
  int N,mx=-1000000000;
  scanf("%d",&N);
  int A[N];
  for(int i=0;i<N;i++)
    {
      scanf("%d",&A[i]);
    }
  int res=max(A,N,mx,0);
  printf("%d",res);
  return 0;
}