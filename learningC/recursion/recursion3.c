#include<stdio.h>
void dg(int n)
{
  /*if(n<1)
  {
    return;
  }*/
  if(n>1)
  {
    printf("%d ",n);
    dg(n-1);
  }
  if(n==1)
  {
    printf("%d",n);
  }
}
int main()
{
  int N;
  scanf("%d",&N);
  dg(N);
  return 0;
}