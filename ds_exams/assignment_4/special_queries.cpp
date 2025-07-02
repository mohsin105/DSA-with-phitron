#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  queue<string>q;
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    {
      int x;
      cin>>x;
      if(x==0)
      {
        string s;
        cin>>s;
        q.push(s);
      }
      if(x==1)
      {
        if(!q.empty())
        {
          cout<<q.front()<<endl;
          //string nm=q.front();
          q.pop();
         
        }
        else
        {
          cout<<"Invalid\n";
        }
      }
    }
  return 0;
}