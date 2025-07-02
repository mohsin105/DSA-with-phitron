#include<stdio.h>
int main()
{
  int n,i,count=0;
  scanf("%d",&n);
  int num[n];
  for(i=0;i<n;i++)
    {
      scanf("%d",&num[i]);
    }
  for(i=0;i<n;i++)
    {
      count=0;
      for(int j=0;j<n;j++)
        {
          if(num[i]==num[j])
          {
            count++;
          }
        }
      printf("%d is present %d times\n",num[i],count);
    }
    
  return 0;
}