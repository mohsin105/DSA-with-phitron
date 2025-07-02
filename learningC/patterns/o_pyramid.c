#include<stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  int k=1;
  for(int i=1;i<=N;i++)
    {
      for(int j=1;j<=k;j++)
        {
           printf("*");
        }
      printf("\n");
      k++;
    }
  return 0;
}