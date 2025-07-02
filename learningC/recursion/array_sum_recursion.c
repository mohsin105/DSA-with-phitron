#include<stdio.h>
long long int add(int a[],int n,int i)
{
  if(i==n)
  {
    return 0;//zokhon array cross kore felbe, tokhon ar kichu add hobe na, 0 return hoye previous funtion(array er last element er function)e return hobe , sekhaner zog variable er value hobe 0. 
  }
  long long int zog=add(a,n,i+1);//porer element gular zogfol niye ashbe. 
  return a[i]+zog;//porer element gular zogfol er  sathe current element zog kore previous recursive function e return dibe. 
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
  long long int sum=add(A,N,0);
  printf("%lld",sum);
  return 0;
}