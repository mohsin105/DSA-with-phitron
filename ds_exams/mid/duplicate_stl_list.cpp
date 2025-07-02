#include<bits/stdc++.h>
using namespace std;
int main()
{
  list<int>list1;
  
  while(true)
    {
      int v;
      cin>>v;
      if(v==-1) break;
      list1.push_back(v);
    }
  list1.sort();
  list1.unique();
  for(int x:list1)
    {
      cout<<x<<" ";
    }
  return 0;
}