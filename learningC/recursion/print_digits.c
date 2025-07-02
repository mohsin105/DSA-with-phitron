#include<stdio.h>
void pr_dg(int n)
{
  if(n==0)
  {
    return;
  }
  int digit=n%10;
  //n%10=digit;
  n=n/10;
  pr_dg(n);
  printf("%d ",digit);
}
int main()
{
  int T,N;
  scanf("%d",&T);
  for(int i=1;i<=T;i++)
    //int N;
    {
      scanf("%d",&N);
      pr_dg(N);
      if(N==0)
      {
        printf("0");
      }
        
      printf("\n");
    }
  return 0;
}