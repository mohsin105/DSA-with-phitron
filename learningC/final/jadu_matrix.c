#include<stdio.h>
int main()
{
  int N,M;
  scanf("%d %d",&N,&M);
  int a[N][M];
  for(int i=0;i<N;i++)
    {
      for(int j=0;j<M;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
  int flag=1;
  if(N!=M)
  {
    printf("NO");
  }
  else
  {
    for(int i=0;i<N;i++)
    {
      for(int j=0;j<M;j++)
        {
          if(i==j)
          {
            if(a[i][j]!=1)
            {
              flag=0;
            }
          }
          else if(i+j==N-1)
          {
            if(a[i][j]!=1)
            {
              flag=0;
            }
          }
          else
          {
            if(a[i][j]!=0)
            {
              flag=0;
            }
          }
        }
    }
    if(flag==1)
    {
      printf("YES");
    }
    else if(flag==0)
    {
      printf("NO");
    }
  }
  return 0;
}