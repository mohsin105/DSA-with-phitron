#include<stdio.h>
int main()
{
  int N,s,k,d;
  scanf("%d",&N);
  s=N-1;
  k=1;
  d=1;
  for(int i=1;i<=(2*N)-1;i++)
    {
      for(int j=1;j<=s;j++)
        {
          printf(" ");
        }
      if(i%2!=0)
      {
        for(int j=1;j<=k;j++)
          {
            printf("#");
          }
      }
      else if(i%2==0)
      {
        for(int j=1;j<=k;j++)
          {
            printf("-");
          }
      }
      printf("\n");
      if(i<=N-1)
      {
        s--;
        k=k+2;
        d=d+2;
      }
      else if(i>=N)
      {
        s++;
        k=k-2;
        d=d-2;
      }
      
    }
  return 0;
}