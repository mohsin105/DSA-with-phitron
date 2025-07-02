#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v1;
  vector<int>v2;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
      v1.push_back(x);
    }
  for(int i=0;i<n;i++)
    {
      int y;
      cin>>y;
      v2.push_back(y);
    }
  vector<int>v3(v2);
  v3.insert(v3.end(),v1.begin(),v1.end());
  for(int a:v3)
    {
      cout<<a<<" ";
    }
  return 0;
}