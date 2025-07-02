#include<stdio.h>
int print(int n)
{
  for(int i=1;i<n;i++)
    {
        printf("%d ",i);
    }
   printf("%d",n);
  return 0;
}
int main()
{
  int N;
  scanf("%d",&N);
  print(N);
  return 0;
}