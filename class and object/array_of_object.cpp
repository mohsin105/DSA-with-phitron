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
  for(int i=0;i<5-1;i++)
    {
      for(int j=i+1;j<5;j++)
        {
          if(a[i].marks<a[j].marks)
          {
            swap(a[i],a[j]);
          }
          else if(a[i].marks==a[j].marks)
          {
            if(a[i].roll>a[j].roll)
            {
              swap(a[i],a[j]);
            }
          }
        }
    }
  for(int i=0;i<5;i++)
    {
      cout<<a[i].nm<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
  return 0;
}