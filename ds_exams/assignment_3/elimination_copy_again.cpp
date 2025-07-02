#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    {
      stack<char>st;
      string s;
      cin>>s;
      for(char c:s)
        {
          if(c=='0')
          {
            st.push(c);
          }
          else if(c=='1')
          {
            if(!st.empty())
            {
              if(st.top()=='0')
                {
                  st.pop();
                }
              else if(st.top()=='1')
                {
                  st.push(c);
                }
            }
            if(st.empty())
            {
              st.push(c);
            }
          }
        }
      if(st.empty()) cout<<"YES\n";
      else if(!st.empty()) cout<<"NO\n";
      
    }
  return 0;
}