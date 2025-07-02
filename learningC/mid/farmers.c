#include<stdio.h>
int main()
{
  int T,M1,M2,D;
  scanf("%d",&T);
  for(int i=1;i<=T;i++)
    {
      scanf("%d %d %d",&M1,&M2,&D);
        int oneF=D*M1;
        int totalF=M1+M2;
        int M2D=oneF/totalF;
        int lessday=D-M2D;
        printf("%d\n",lessday);
    }
  
  return 0;
}