#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    {
      stack<char>st;
      stack<char>cs;
      string s;
      cin>>s;
      for(char c:s)
        {
          st.push(c);
        }
      int flag=0;
      while(true)
        {
          flag=0;
          if(!st.empty())
          {
            int t=st.top();
            st.pop();
            if(t=='0')
              {
                cs.push(t);
              }
              else if(t=='1')
              {
                if(!st.empty())
                {
                  if(st.top()=='0')
                    {
                      flag=1;
                      st.pop();
                      while(!cs.empty())
                        {
                          st.push(cs.top());
                          cs.pop();
                        }
                    }
                  else if(st.top()=='1')
                    {
                      cs.push(t);
                    }
                }
                else
                {
                  flag=0;
                  break;
                }
              }
          }
          
          
          if(st.empty())
          {
            if(cs.empty())
            {
              flag=1;
              break;
            }
            else if(!cs.empty())
            {
              flag=0;
              break;
            }
          }
        }
      if(flag==0) cout<<"NO\n";
      else if(flag==1) cout<<"YES\n";
    }
  
  return 0;
}