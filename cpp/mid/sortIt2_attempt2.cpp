#include<bits/stdc++.h>
using namespace std;
int* sort_it(int sz)
{
  int *ar=new int[sz];
  for(int i=0;i<sz;i++)
    {
      cin>>ar[i];
    }
  sort(ar,ar+sz,greater<int>());
  return ar;
}
int main()
{
  int n;
  cin>>n;
  int* a=sort_it(n);
  for(int i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
  return 0;
}