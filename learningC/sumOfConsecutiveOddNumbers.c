#include<stdio.h>
int main()
{
  int T;
  scanf("%d",&T);
  int X,Y;
  for(int i=1;i<=T;i++)
    {
      scanf("%d %d",&X,&Y);
      int sum=0;
      if(X<Y)
      {
         for(int j=X+1;j<Y;j++)
           if(j%2!=0)
           {
             sum=sum+j;
           }
      }
      else if(X>Y)
      {
        for(int j=Y+1;j<X;j++)
          {
            if(j%2!=0)
            {
              sum=sum+j;
            }
          }
      }
      printf("%d\n",sum);
    }
  return 0;
}