#include<stdio.h>
int main()
{
  int numbers[5]={5,2,2,3,1};
  int x=9;
  int flag=0;
  for(int i=0;i<5-1;i++)
    {
      for(int j=i+1;j<5;j++)
        {
          if(numbers[i]+numbers[j]==x)
          {
            flag=1;
           // printf("matches with %d th index and %d th index",i,j);
           // break;
          }
        }
    }
  if(flag==1)
  {
    printf("yes");
  }
  if(flag==0)
  {
    printf("no");
  }
  return 0;
}