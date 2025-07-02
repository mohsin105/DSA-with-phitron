#include<stdio.h>
int main()
{
  int n,k;
  scanf("%d",&n);
  k=1; //to start from 4 and end at 1, value here would be 4 instead.
  for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=k;j++)
        {
          printf("%d ",j);
        }
      printf("\n");
      k++; ////to start from 4 and end at 1,here replace with k--;
    }
  return 0;
}