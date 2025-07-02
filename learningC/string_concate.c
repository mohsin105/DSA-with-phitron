#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],b[100];
  scanf("%s %s",a,b);
  printf("%s %s\n",a,b);
  for(int i=strlen(a),j=0;i<=strlen(a)+strlen(b) &&j<=strlen(b);i++,j++)//with this condition, you cannot (will be harder) concatanate a portion of b string into string a  
    {
      a[i]=b[j];
    }
  printf("%s",a);
  return 0;
}

//phitron method of string concate
/*
#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],b[100];
  scanf("%s %s",a,b);
  int k=strlen(a);
  for(int i=0;i<=strlen(b);i++)
  {
    a[k]=b[i];
    k++;
  }
  printf("%s",a);
*/