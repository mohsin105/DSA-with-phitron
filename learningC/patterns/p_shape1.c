#include<stdio.h>
int main()
{
  int N,k;
  scanf("%d",&N);
  k=N;
  for(int i=1;i<=N;i++)
    {
      for(int j=1;j<=k;j++)
        {
          printf("*");
        }
      k--;
      printf("\n");
    }
  return 0;
}