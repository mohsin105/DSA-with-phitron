#include<bits/stdc++.h>
using namespace std;
class Student
{
  public:
  int id;
  char nm[100];
  char sec;
  int mark;
  Student(int i,char n[],char s,int mr)
{
  id=i;
  strcpy(nm,n);
  sec=s;
  mark=mr;
}
};
int main()
{
  Student a();
  return 0;
}