#include<stdio.h>
int main()
{
  int n,k,s;
  scanf("%d",&n);
  k=(2*n)-1;
  s=0;
  for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=s;j++)
        {
          printf(" ");
        }
      for(int j=1;j<=k;j++)
        {
          printf("*");
        }
      printf("\n");
      s++;
      k=k-2;
    }
  return 0;
}


