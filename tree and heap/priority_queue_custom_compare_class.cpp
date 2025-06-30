#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};
class cmp
{
    public:
    bool operator()(Student a, Student b)
    {
        if(a.marks<b.marks) return true; //true means sorting required
        else if(a.marks==b.marks)
        {
            if(a.roll>b.roll) return true;
            else return false;
        }
        else return false;
        /*
        shortcut: 
        return (a.roll>b.roll);
        */
    }
};
int main()
{
    int n;
    cin>>n;
    priority_queue<Student,vector<Student>,cmp>pq;
    for(int i=0;i<n;i++)
    {
        string nm;
        int ro,mrk;
        cin>>nm>>ro>>mrk;
        Student obj(nm,ro,mrk);
        pq.push(obj);
    }
    //printing the pq
    while(!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        pq.pop();
    }
    return 0;
}

/*
5
rahim 25 85
karim 39 99
tamim 9 85
sharif 23 95
zarif 28 88
*/