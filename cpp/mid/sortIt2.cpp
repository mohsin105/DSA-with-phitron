#include<bits/stdc++.h>
using namespace std;
void sort_it(int a[],int sz)
{
  for(int i=0;i<sz;i++)
    {
      cin>>a[i];
    }
  sort(a,a+sz,greater<int>());
  
}
int main()
{
  int n;
  cin>>n;
  int ar[n];
  sort_it(ar,n);
  for(int i=0;i<n;i++)
    {
      cout<<ar[i]<<" ";
    }
  return 0;
}