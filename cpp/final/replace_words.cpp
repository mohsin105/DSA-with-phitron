#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  for(int t=1;t<=T;t++)
    {
      string s;
      string x;
      cin>>s>>x;
      while(s.find(x)!=-1)
        {
          s.replace(s.find(x),x.size(),"#");
        }
      cout<<s<<endl;
    }
  
  return 0;
}