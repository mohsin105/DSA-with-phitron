#include<stdio.h>
void dg(int n,int i)
{
  if(i>n)
  {
    return;
  }
  printf("%d\n",i);
  dg(n,i+1);
}
int main()
{
  int N;
  scanf("%d",&N);
  dg(N,1);
  return 0;
}