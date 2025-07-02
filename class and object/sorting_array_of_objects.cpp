#include<bits/stdc++.h>
using namespace std;
class Student
{
  public:
  string nm;
  int roll;
  int marks;
  /*Student(string n,int r,int mrk)
  {
    nm=n;
    roll=r;
    marks=mrk;
  }*/
};
bool cmp(Student a,Student b)
{
  if(a.marks==b.marks)
  {
    if(a.roll<b.roll)
    {
      return true;
    }
    else return false;
  }
  else if(a.marks>b.marks)
  {
    return true;//no need to swap
  }
  else return false; //do swap
}
int main()
{
  Student a[5];
  for(int i=0;i<5;i++)
    {
      cin>>a[i].nm>>a[i].roll>>a[i].marks;
    }
  for(int i=0;i<5;i++)
    {
      cout<<a[i].nm<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
  Student mn;
  Student mx;
  mx.marks=INT_MIN;
  mn.marks=INT_MAX;
  for(int i=0;i<5;i++)
    {
      if(a[i].marks<mn.marks) mn=a[i];
      if(a[i].marks>mx.marks) mx=a[i];
    }
  cout<<"Min number holder "<<mn.nm<<" "<<mn.roll<<" "<<mn.marks<<endl;
  cout<<"Maximum number holder is "<<mx.nm<<" "<<mx.roll<<" "<<mx.marks<<endl;
  //sorting in descending order according to marks
  sort(a,a+5,cmp);
  for(int i=0;i<5;i++)
    {
      cout<<a[i].nm<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
  return 0;
}