#include<stdio.h>
int main()
{
  int T;
  scanf("%d",&T);
  for(int i=1;i<=T;i++)
    {
      int N;
      scanf("%d",&N);
      char  S[N+1];
      scanf("%s",S);
      int cntT=0,cntP=0;
      for(int i=0;i<N;i++)
        {
          if(S[i]=='T')
          {
            cntT++;
          }
          else if(S[i]=='P')
          {
            cntP++;
          }
        }
      if(cntT>cntP)
      {
        printf("Tiger\n");
      }
      else if(cntP>cntT)
      {
        printf("Pathaan\n");
      }
      else
      {
        printf("Draw\n");
      }
    }
}