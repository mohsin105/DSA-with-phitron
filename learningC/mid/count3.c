#include<stdio.h>
#include<string.h>
int main()
{
  int T,countC,countS,countD;
  scanf("%d",&T);
  char S[10001];
  for(int i=1;i<=T;i++)
    {
      countC=0,countS=0,countD=0;
      scanf("%s",S);
      for(int j=0;j<strlen(S);j++)
        {
          if(S[j]>='A'&& S[j]<='Z')
          {
            countC++;
          }
          else if(S[j]>='a'&& S[j]<='z')
          {
            countS++;
          }
          else if(S[j]>='0'&& S[j]<='9')
          {
            countD++;
          }
        }
      printf("%d %d %d\n",countC,countS,countD);
    }
  return 0;
}