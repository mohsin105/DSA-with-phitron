#include<bits/stdc++.h>
using namespace std;
int main()
{
  char w[100001];
  cin.getline(w,100001);
  int count=0;
  int j=0;
  while(w[j]!='\0')
  {
      count++;
      j++;
  }
  int wlen=count;
  cout<<wlen;
  int chr[wlen];
  for(int i=0;i<wlen;i++)
    {
      if(w[i]>='a'&&w[i]<='z')
      {
        chr[i]=int(w[i]);
      }
    }
  int k=0;
  int cnt=0;
  while(chr[k]!='\0')
    {
      cnt++;
      k++;
    }
  sort(chr,chr+cnt);
  for(int i=0;i<cnt;i++)
    {
      cout<<char(chr[i]);
    }
}