#include<stdio.h>
int main()
{
  int N,count2=0,count3=0;
  scanf("%d",&N);
  int A[N];
  for(int i=0;i<N;i++)
    {
      scanf("%d",&A[i]);
      if(A[i]%2==0)
      {
        count2++;
      }
      else if(A[i]%3==0)
      {
        count3++;
      }
    }
  printf("%d %d",count2,count3);
  
  return 0;
}