#include<stdio.h>
long long int fact(int n,int i,long long int s)
{
  if(i>n)
  {
    return s;
  }
  s=s*i;
  long long int res=fact(n,i+1,s);
  //s=i*res;
  return res;
}
int main()
{
  int N;
  scanf("%d",&N);
  long long int res=fact(N,1,1);
  printf("%lld",res);
  return 0;
}