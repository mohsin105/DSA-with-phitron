#include<stdio.h>
void prEven(int a[],int n,int i)
{
  if(i==n)
  {
    return;
  }
  prEven(a,n,i+1);
  if(i%2==0)
  {
    printf("%d ",a[i]);
  }
}
int main()
{
  int N,i;
  scanf("%d",&N);
  int A[N];
  for(i=0;i<N;i++)
    {
      scanf("%d",&A[i]);
    }
  prEven(A,N,0);
  return 0;
}