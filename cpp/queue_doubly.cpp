#include<bits/stdc++.h>
using namespace std;
//node of doubly linked list
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
class myQueue
{
    public:
    //declaring a doubly linked list to store queue elements
    Node*head=NULL;
    Node*tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        //inserting at the tail of doubly linked list
        Node*newNode=new Node(val);
        if(head==NULL)
        {
            head=newNode;//no need to pass head tail address with & sign, because declaration
            tail=newNode; //and function is happening inside same class
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
    void pop()
    {
        sz--;
        //removing the head of doubly linked list
        Node*del=head;
        head=head->next;
        
        if(head==NULL)
        {
            tail=NULL;
            delete del;
            return;
        }
        head->prev=NULL;
        delete del;
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
    //declaring a queue qu of myQueue class
    myQueue qu;
    int n;
    cin>>n;
    //taking inpput of queue elements
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        qu.push(x);
    }
    while(!qu.empty())
    {
        cout<<qu.front()<<endl;
        qu.pop();
    }
    return 0;
}