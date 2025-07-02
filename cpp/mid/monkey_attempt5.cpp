#include<bits/stdc++.h>
using namespace std;
int main()
{
  char w[100005];
  while(cin.getline(w,100005))
    {
      int wlen=0;
      for(int i=0;i<100005;i++)
        {
          if(w[i]=='\0')
          {
            break;
          }
          wlen++;
        }
      int chr[wlen];
      for(int i=0;i<wlen;i++)
        {
          if(w[i]==' ')
          {
            continue;
          }
          chr[i]=int(w[i]);
        }
      sort(chr,chr+wlen);
      for(int i=0;i<wlen;i++)
        {
          if(chr[i]>=97 &&chr[i]<=122)
          {
            cout<<char(chr[i]);
          }
        }
      cout<<endl;
    }
  //cin.getline(w,100005);
  return 0;
}