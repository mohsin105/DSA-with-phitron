#include<bits/stdc++.h>
using namespace std;
int* sort_it(int sz)
{
  int*p=new int[sz];
  for(int i=0;i<sz;i++)
    {
      cin>>*(p+i);
    }
  sort(*p,*(p+sz),greater<int>());
  return p;
}
int main()
{
  int n;
  cin>>n;
  int* ptr=sort_it(n);
  for(int i=0;i<n;i++)
    {
      cout<<*(ptr+i)<<" ";
    }
  return 0;
}