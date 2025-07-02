#include<stdio.h>
int main()
{
  char S;
  int cnt[26]={0};
  while(scanf("%c",&S)!=EOF)
    {
      int val=S-'a';
      cnt[val]++;
    }
  
  for(int i=0;i<26;i++)
    {
      if(cnt[i]>0)
      {
        printf("%c : %d",i+'a',cnt[i]);
        cnt[i]=0;
      }
    }
  return 0;
}