#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void delete_from_tail(Node*&head,Node*&tail)
{
    /*if(tail==NULL)
    {
        head==NULL;
        return;
    }*/
    
}
class myStack
{
    public:
    Node*head=NULL;
    Node*tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        //insert_at_tail(head,tail,val);
        Node*newNode=new Node(val);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=tail->next;
        
    }
    void pop()
    {
        //delete_from_tail(head,tail);
        sz--;
        Node*del=tail;
        //tail->prev->next=NULL;
        tail=tail->prev;
        if(tail==NULL) head==NULL;
        delete del;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(size()==0) return true;
        else return false;
    }
};
int main()
{
    myStack st;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}