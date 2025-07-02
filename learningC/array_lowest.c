#include<stdio.h>
int main()
{
  int N,i,pos,min=1000000;
  scanf("%d",&N);
  int A[N];
  for(i=0;i<N;i++)
    {
      scanf("%d",&A[i]);
      if(A[i]<min)
      {
        min=A[i];
        pos=i+1;
      }
    }
  printf("%d %d",min,pos);
  return 0;
}