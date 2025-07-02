#include<bits/stdc++.h>
using namespace std;
int main()
{
  char w[100005];
  while(cin.getline(w,100005))
    {
      sort(w,w+100005);
    }
  for(int i=0;i<100005;i++)
    {
      if (w[i]==' ')
      {
        continue;
      }
      else
      {
        cout<<w[i];
      }
    }
  return 0;
}