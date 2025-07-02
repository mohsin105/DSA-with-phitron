#include<bits/stdc++.h>
using namespace std;
int main()
{
  queue<int>q;
  queue<int>q1;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
      q.push(x);
    }
  //q=q1;
  //cout<<q.front();
  stack<int>st;
  while(q.empty()==false)
    {
      st.push(q.front());
      q.pop();
    }
  while(!st.empty())
    {
      q.push(st.top());
      st.pop();
    }
  while(!q.empty())
    {
      cout<<q.front()<<endl;;
      q.pop();
    }
  return 0;
}