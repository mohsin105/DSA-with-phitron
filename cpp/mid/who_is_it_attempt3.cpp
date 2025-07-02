#include<bits/stdc++.h>
using namespace std;
class Student
{
  public:
  int id;
  char nm[100];
  char sec;
  int marks;
};
int main()
{
  
      Student a;
      cin>>a.id>>a.nm>>a.sec>>a.marks;
      Student b;
      cin>>b.id>>b.nm>>b.sec>>b.marks;
      Student c;
      cin>>c.id>>c.nm>>c.sec>>c.marks;
  //cout<<b.nm<<a.marks<<c.sec;
  int mx=max({a.marks,b.marks,c.marks});
  cout<<mx;
  if (mx==a.marks)
  {
    cout<<a.id<<" "<<a.nm<<" "<<a.sec<<" "<<a.marks;
  }
  if (mx==b.marks)
    {
      cout<<b.id<<" "<<b.nm<<" "<<b.sec<<" "<<b.marks;
    }
  if (mx==c.marks)
    {
      cout<<c.id<<" "<<c.nm<<" "<<c.sec<<" "<<c.marks;
    }
  return 0;
}