#include<stdio.h>
int sum(int X,int Y)
{
  int summ=X+Y;
  return summ;
}
int main()
{
  int X,Y;
  scanf("%d %d",&X,&Y);
  int res=sum(X,Y);
  printf("%d",res);
  return 0;
}