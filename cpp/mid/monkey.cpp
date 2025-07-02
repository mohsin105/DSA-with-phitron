#include<bits/stdc++.h>
using namespace std;
int main()
{
  char w[100002];
  cin.getline(w,100002);
  int chr[100002];
  for(int i=0;i<100001;i++)
    {
      if(w[i]>='a'&&w[i]<='z')
      {
        chr[i]=int(w[i]);
      }
    }
  sort(chr,chr+100000);
  for(int i=0;i<10000;i++)
    {
      cout<<char(chr[i]);
    }
}