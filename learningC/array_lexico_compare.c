#include<stdio.h>
int main()
{
  char x[100],y[100];
  scanf("%s %s",x,y);
  for(int i=0;x[i]!='\0'||y[i]!=0;i++)
    {
      if(x[i]==y[i])
      {
        continue;
      }
      else if(x[i]>y[i])
      {
        //printf("y smaller");
        break;
      }
      else
      {
       // printf("x smaller");
        break;
      }
    }
  return 0;
}