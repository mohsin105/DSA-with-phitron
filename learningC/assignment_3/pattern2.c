#include<stdio.h>
int main()
{
  int n,d,s;
  scanf("%d",&n);
  d=1;
  s=n-1;
  for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=s;j++)
        {
          printf(" ");
        }
      for(int j=d;j>=1;j--)
        {
          printf("%d",j);
        }
      printf("\n");
      s--;
      d++;
    }
  return 0;
}