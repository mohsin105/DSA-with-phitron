#include<bits/stdc++.h>
using namespace std;
int main()
{
  list<int>list1;
  int q;
  cin>>q;
  for(int i=0;i<q;i++)
    {
      if(list1.size()>0) list1.reverse();
      int x,v;
      cin>>x>>v;
      if(x==0) list1.push_front(v);
      if(x==1) list1.push_back(v);
      if(x==2)
      {
        if(v<list1.size())
        {
          if(v==0) list1.pop_front();
          else if(v==list1.size()-1) list1.pop_back();
          else if(v>0 && v<list1.size())
          {
            list1.erase(next(list1.begin(),v));
          }
        }
      }
      cout<<"L -> ";
      for(int x:list1)
        {
          cout<<x<<" ";
        }
      cout<<endl;
      list1.reverse();
      cout<<"R -> ";
      for(int x:list1)
        {
          cout<<x<<" ";
        }
      cout<<endl;
    }
  return 0;
}