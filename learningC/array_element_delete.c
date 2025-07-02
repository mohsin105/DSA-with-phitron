#include<stdio.h>
int main()
{
  int N,i;
  scanf("%d",&N);
  int A[N];
  for(i=0;i<N;i++)
    {
      scanf("%d",&A[i]);
    }
  int pos;
  scanf("%d",&pos);
  for(i=pos;i<N-1;i++)
    {
      A[i]=A[i+1];
    }
  for(i=0;i<N-1;i++)
    {
      printf("%d ",A[i]);
    }
  return 0;
}