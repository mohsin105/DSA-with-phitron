#include<stdio.h>
int main()
{
  char a[100],b[100];
  scanf("%s %s",a,b);
  int i=0;
  while(1)
    {
      if(a[i]=='\0' && b[i]=='\0')
      {
        printf("equal\n");
        break;
      }
      else if(a[i]=='\0')
      {
        printf("a smaller\n");
        break;
      }
      else if(b[i]=='\0')
      {
        printf("b smaller\n");
        break;
      }
      if(a[i]==b[i])
      {
        i++;
      }
      else if(a[i]>b[i])
      {
        printf("b smaller");
        break;
      }
      else
      {
        printf("a smaller");
        break;
      }
    }
  return 0;
}