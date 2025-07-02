#include<stdio.h>
int main()
{
  int T,N,X,present;
  scanf("%d",&T);
  for(int i=1;i<=T;i++)
    {
      present=0;
      scanf("%d",&N);
      int A[N];
      for(int i=0;i<N;i++)
        {
          scanf("%d",&A[i]);
        }
      scanf("%d",&X);
      for(int i=0;i<N;i++)
        {
          if(A[i]==X)
          {
            present=1;
            break;
          }
        }
      if(present==1)
      {
        printf("YES\n");
      }
      else if(present==0)
      {
        printf("NO\n");
      }
    }
  return 0;
}