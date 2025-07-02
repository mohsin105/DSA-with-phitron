#include<bits/stdc++.h>
using namespace std;
/*class Node
{
public:
string sr;
Node*next;
Node(string search)
{
  sr=search;
  next=NULL;
}
};
void insert*/
int main()
{
  list<string>list1;
  while(true)
    {
      string s;
      cin>>s;
      if(s=="end") break;
      list1.push_back(s);
    }
  for(string w:list1)
    {
      cout<<w<<" ";
    }
  /*int q;
  cin>>q;
  for(int i=0;i<q;i++)
    {
      list<string>search;
      string sr;
      cin>>sr;
      search.push_back(sr);
      for(string add:list1)
        {
          if(search.size()==1)
          {
            if(search.front()=="prev")
          }
          if(add==*next(search.begin(),1))
          {
            
          }
        }
    }*/
  return 0;
}