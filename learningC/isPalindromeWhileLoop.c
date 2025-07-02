#include<stdio.h>
#include<string.h>
int main()
{
  char S[1001];
  scanf("%s",S);
  int i=0,j=strlen(S)-1;
  int pali=1;
  while(i<j)
    {
      if(S[i]!=S[j])
      {
        pali=0;
        break;
      }
      i++;
      j--;
    }
  if(pali==1)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
  return 0;
}