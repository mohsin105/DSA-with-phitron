#include<stdio.h>
int main()
{
  int T;
  scanf("%d",&T);
  for(int i=1;i<=T;i++)
    {
      long long int M,D;
      int A,B,C;
      scanf("%lld %d %d %d",&M,&A,&B,&C);
      long long int mult3=A*B*C;
      if(M%mult3!=0)
      {
        printf("-1\n");
      }
      else
      {
        D=M/mult3;
        printf("%lld\n",D);
      }
    }
  return 0;
}