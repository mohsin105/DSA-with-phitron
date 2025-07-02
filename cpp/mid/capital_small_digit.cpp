#include<iostream>
using namespace std;
int main()
{
  char x;
  cin>>x;
  if(x>='0' && x<='9')
  {
    cout<<"IS DIGIT";
  }
  else
  {
    cout<<"ALPHA"<<endl;
    if(x>='A' &&x<='Z')
    {
      cout<<"IS CAPITAL";
    }
    else if(x>='a' &&x<='z')
    {
      cout<<"IS SMALL";
    }
  }
  return 0;
}