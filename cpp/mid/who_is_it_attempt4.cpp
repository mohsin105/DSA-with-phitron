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
        //cout<<b.nm<<a.marks<<c.sec;
       if(a.marks>b.marks && a.marks>c.marks)
       {
         cout<<a.id<<" "<<a.nm<<" "<<a.sec<<" "<<a.marks;
       }
       else if(b.marks>a.marks && b.marks>c.marks)
          {
            cout<<b.id<<" "<<b.nm<<" "<<b.sec<<" "<<b.marks;
          }
       else if(c.marks>a.marks && c.marks>b.marks)
          {
            cout<<c.id<<" "<<c.nm<<" "<<c.sec<<" "<<c.marks;
          }
       else if(a.marks==b.marks==c.marks)
       {
         int mn=min({a.id,b.id,c.id});
         if(mn==a.id)
         {
           cout<<a.id<<" "<<a.nm<<" "<<a.sec<<" "<<a.marks;
         }
         else if(mn==b.id)
         {
           cout<<b.id<<" "<<b.nm<<" "<<b.sec<<" "<<b.marks;
         }
         else
         {
           cout<<c.id<<" "<<c.nm<<" "<<c.sec<<" "<<c.marks;
         }
       }
      else if(a.marks==b.marks)
       {
         if(a.id<b.id)
         {
           cout<<a.id<<" "<<a.nm<<" "<<a.sec<<" "<<a.marks;
         }
         else
         {
           cout<<b.id<<" "<<b.nm<<" "<<b.sec<<" "<<b.marks;
         }
       }
       else if(a.marks==c.marks)
       {
         if(a.id<c.id)
         {
           cout<<a.id<<" "<<a.nm<<" "<<a.sec<<" "<<a.marks;
         }
         else
         {
           cout<<c.id<<" "<<c.nm<<" "<<c.sec<<" "<<c.marks;
         }
       }
       else if(b.marks==c.marks)
       {
         if(b.id<c.id)
         {
           cout<<b.id<<" "<<b.nm<<" "<<b.sec<<" "<<b.marks;
         }
         else
         {
           cout<<c.id<<" "<<c.nm<<" "<<c.sec<<" "<<c.marks;
         }
       }
        cout<<endl;
    }
  return 0;
}