//using series formula
#include<stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  long long int next=N+1;
  long long int mult=N*next;
  long long int sum=mult/2;
  printf("%lld",sum);
  return 0;
}