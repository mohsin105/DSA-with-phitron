#include<stdio.h>
int main()
{
  int N,i,j,temp;
  scanf("%d",&N);
  int A[N];
  for(i=0;i<N;i++)
    {
      scanf("%d",&A[i]);
    }
  for(i=0,j=N-1;i<j;i++,j--)
    {
      temp=A[i];
      A[i]=A[j];
      A[j]=temp;
    }
  for(i=0;i<N;i++)
    {
      printf("%d ",A[i]);
    }
  return 0;
}