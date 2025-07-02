#include<stdio.h> 
long long int count_before_one(int *a,int n)
{
  long long int count=0;
  for(int i=0;i<n;i++)
    {
      if(a[i]!=1)
      {
        count++;
      }
      else if(a[i]==1)
      {
        break;
      }
    }
  return count;
}
int main()
{
  int N;
  scanf("%d",&N);
  int A[N];
  for(int i=0;i<N;i++)
    {
      scanf("%d",&A[i]);
    }
  long long int count=count_before_one(A,N);
  printf("%lld",count);
  
  return 0;
}