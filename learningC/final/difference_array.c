#include<stdio.h>
#include<stdlib.h>
int main()
{
  int T;
  scanf("%d",&T);
  for(int i=1;i<=T;i++)
    {
      int N;
      scanf("%d",&N);
      int A[N],B[N],C[N];
      for(int i=0;i<N;i++)
        {
          scanf("%d",&A[i]);
        }
      for(int i=0;i<N;i++)
        {
          B[i]=A[i];
        }
      for(int i=0;i<N-1;i++)
        {
          for(int j=i+1;j<N;j++)
            {
              if(B[i]>B[j])
              {
                int tmp=B[i];
                B[i]=B[j];
                B[j]=tmp;
              }
            }
        }
      for(int i=0;i<N;i++)
        {
          C[i]=abs(A[i]-B[i]);
          printf("%d ",C[i]);
        }
      printf("\n");
    }
  return 0;
}