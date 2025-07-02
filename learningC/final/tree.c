#include<stdio.h>
int main()
{
  int N,k,s;
  scanf("%d",&N);
  int addLine=(N-1)/2;
  int leafLine=6+addLine;
  int n=leafLine+5;
  s=leafLine-1;
  k=1;
  for(int i=1;i<=leafLine;i++)
    {
      for(int j=1;j<=s;j++)
        {
          printf(" ");
        }
      for(int j=1;j<=k;j++)
        {
          printf("*");
        }
      s--;
      k=k+2;
      printf("\n");
    }
  for(int i=1;i<=5;i++)
    {
      for(int j=1;j<=5;j++)
        {
          printf(" ");
        }
      for(int j=1;j<=N;j++)
        {
          printf("*");
        }
      printf("\n");
    }
}