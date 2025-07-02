#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int b=1;b<=t;b++)
    {
      int n,s;
      cin>>n>>s;
      int a[n];
      for(int i=0;i<n;i++)
        {
          cin>>a[i];
        }
      int flag =0;
      for(int i=0;i<n-2;i++)
        {
          for(int j=i+1;j<n-1;j++)
            {
              if(a[i]+a[j]>s)
              {
                continue;
              }
              else
              {
                for(int k=j+1;k<n;k++)
                  {
                    int ts=a[i]+a[j]+a[k];
                    if(ts==s)
                    {
                      flag=1;
                      break;
                    }
                  }
              }
            }
        }
      if(flag==0)
      {
        cout<<"NO";
      }
      else
      {
        cout<<"YES";
      }
      cout<<endl;
    }
  return 0;
}