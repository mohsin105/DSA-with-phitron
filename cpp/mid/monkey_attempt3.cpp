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
  //cout<<wlen;
  int chr[wlen];
  for(int i=0;i<wlen;i++)
    {
      if(w[i]=='\0')
        {
          break;
        }
      else if(w[i]==' ')
      {
        continue;
      }
      else if(w[i]>='a'&&w[i]<='z')
      {
        chr[i]=int(w[i]);
      }
    }
  
  sort(chr,chr+(wlen-1));
  for(int i=0;i<wlen;i++)
    {
      if(chr[i]=='\0')
      {
        break;
      }
      cout<<char(chr[i]);
    }
}