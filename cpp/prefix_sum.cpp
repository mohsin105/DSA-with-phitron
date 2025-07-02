#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[7]={2,6,13,11,17,24,15};
  int ps_a[7];
  ps_a[0]=a[0];
  for(int i=1;i<7;i++)
    {
      ps_a[i]=ps_a[i-1]+a[i];
    }
  for(int i=0;i<7;i++)
    {
      cout<<ps_a[i]<<" ";
    }
  return 0;
}