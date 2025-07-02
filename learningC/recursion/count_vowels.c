#include<stdio.h>
int vow(char s[],int i)
{
  if(s[i]=='\0')
  {
    return 0;
  }
  int ans=vow(s,i+1);
  if(s[i]>='A'&&s[i]<='Z')
  {
    s[i]='a'+(s[i]-'A');
  }
  if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
  {
    return 1+ans;
  }
  else
  {
    return ans;
  }
}
int main()
{
  char S[201];
  fgets(S,sizeof(S),stdin);
  int count=vow(S, 0);
  //int count=vow(Str,0);
  printf("%d",count);
  return 0;
}