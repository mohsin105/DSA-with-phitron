#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  string j="Jessica";
  stringstream ss(s);
  string word;
  int flag =0;
  while(ss>>word)
    {
      if(word==j)
      {
        flag=1;
        break; 
      }
    }
  if(flag==1) cout<<"YES";
  else if(flag==0) cout<<"NO";
  return 0;
}