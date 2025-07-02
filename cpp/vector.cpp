#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={1,2,3,4,5,6};
  while(!v.empty())
    {
      cout<<v.back()<<" ";
      v.pop_back();
    }
  return 0;
}