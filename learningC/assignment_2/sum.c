#include<stdio.h>
int main()
{
  int N,num,psum=0,nsum=0;
  scanf("%d",&N);
  for(int i=1;i<=N;i++)
    {
      scanf("%d",&num);
      if(num>0)
      {
        psum=psum+num;
      }
      else if(num<0)
      {
        nsum=nsum+num;
      }
    }
  printf("%d %d",psum,nsum);
  return 0;
}