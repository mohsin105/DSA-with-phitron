#include<stdio.h>
#include<string.h>
long long int is_palindrome(char str[])
{
  int pali=1;
  int i=0,j=strlen(str)-1;
  while(i<j)
    {
      if(str[i]!=str[j])
      {
        pali=0;
        break;
      }
      i++;
      j--;
    }
  if(pali==1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int main()
{
  char S[1001];
  scanf("%s",S);
  long long int isPali=is_palindrome(S);
  
  if(isPali==0)
  {
    printf("Not Palindrome");
  }
  else if(isPali==1)
  {
    printf("Palindrome");
  }
  
  return 0;
}