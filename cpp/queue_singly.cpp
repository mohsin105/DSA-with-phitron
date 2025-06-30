#include<bits/stdc++.h>
using namespace std;
//node of singly linked list
class Node
{
    public:
    int val;
    Node*next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class myQueue
{
    public:
    //creating a linked list to the elements of queue
    Node*head=NULL;
    Node*tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        //insert at tail of singly linked list
        Node*newNode=new Node(val);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=tail->next;
    }
    void pop()
    {
        sz--;
        //delete the head of singly linked list
        /*Node*tmp=head;
        while(tmp->next->next!=NULL)
        {
            tmp=tmp->next;
        }
        Node*del=tmp->next;
        tail=tmp;
        delete del;*/

        Node*del=head;
        head=head->next;
        delete del;
        if(head==NULL)
        {
            tail=NULL;
        }
    }
    int front()
    {
        return head->val;
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
    myQueue qu;
    int n;
    cin>>n;
    //taking input of queue elements
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        qu.push(x);
    }
    //accessing queue elements until queue is empty
    while(!qu.empty())
    {
        cout<<qu.front()<<endl;
        qu.pop();
    }
    return 0;
}