#include<stdio.h>
int main()
{
  int N,X,i;
  scanf("%d",&N);
  int A[N];
  for(i=0;i<N;i++)
    {
      scanf("%d",&A[i]);
      
    }
  scanf("%d",&X);
  int ans=-1;
  for(i=0;i<N;i++)
    {
      if(X==A[i])
      {
        ans=i;
        break;
      }
    }
  printf("%d",ans);
  return 0;
}