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
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
    {
      Student a;
      cin>>a.id>>a.nm>>a.sec>>a.marks;
      Student b;
      cin>>b.id>>b.nm>>b.sec>>b.marks;
      Student c;
      cin>>c.id>>c.nm>>c.sec>>c.marks;
    }
  
  return 0;
}