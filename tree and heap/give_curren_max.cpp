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
    bool operator()(Student a,Student b)
    {
        if(a.marks<b.marks) return true;
        else if(a.marks==b.marks)
        {
            if(a.roll>b.roll) return true;
            else return false;
        }
        else return false;
    }
};
int main()
{
    priority_queue<Student,vector<Student>,cmp>pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string nm;
        int r;
        int m;
        cin>>nm;
        cin >>r>>m;
        Student obj(nm,r,m);
        pq.push(obj);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int c;
        cin>>c;
        if(c==0)
        {
            string nm;
            int r;
            int m;
            cin>>nm;
            cin >>r>>m;
            Student obj(nm,r,m);
            pq.push(obj);
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else if(c==1)
        {
            if(!pq.empty())
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
            else cout<<"Empty\n";
        }
        else if(c==2)
        {
            if(!pq.empty())
            {
                pq.pop();
                if(!pq.empty())
                {
                    cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
                }
                else cout<<"Empty\n";
            }
            else cout<<"Empty\n";
        }
    }
    return 0;
}