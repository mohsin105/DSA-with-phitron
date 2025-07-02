#include<stdio.h>
void pr(int n,int i)
{
  if(i>n)
  {
    return;
  }
  printf("I love Recursion\n");
  //i++; eta dile pr function call er vitore i++ na diye only i dite hobe. 
  pr(n,i+1);
}
int main()
{
  int N;
  scanf("%d",&N);
  pr(N,1);
  return 0;
}