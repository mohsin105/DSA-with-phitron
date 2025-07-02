#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    {
      string s;
      cin>>s;
      stack<char>st;
      stack<char>cs;
      for(char c:s)
        {
          //cout<<c<<endl;
          st.push(c);//0001
        }
      int flag=0;
      while(true)
        {
          flag=0;
          int t=st.top();//1//00(0)//0(0)
          st.pop();//000//0//null
          if(t=='0')
          {
            if(!st.empty())
            {
              if(st.top()=='1')
                {
                  flag=1;
                  st.pop();
                  while(!cs.empty())
                    {
                      st.push(cs.top());
                      cs.pop();
                    }
                }
                else if(st.top()=='0')//0
                {
                  cs.push(t);//0
                }
            }
            else 
            {
              flag=0;
              break;
            }
          }
          else if(t=='1')
          {
            if(!st.empty())//not empty(000)
            {
              if(st.top()=='0')//0
                {
                  flag=1;
                  st.pop();//00
                  while(!cs.empty())//empty
                    {
                      st.push(cs.top());//
                      cs.pop();//
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
           // flag=0;
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
          //if(st.empty() &&cs.empty() && flag==0) break;
        }
      if(flag==0) cout<<"NO\n";
      else if(flag==1) cout<<"YES\n";
    }
  return 0;
}