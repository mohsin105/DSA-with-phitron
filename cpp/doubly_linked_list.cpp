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
        next=NULL;
        prev=NULL;
    }
};
void print_forward(Node*head)
{
    cout<<"\nPrintting forward"<<endl;
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
}
void print_backward(Node*tail)
{
    cout<<"\nPrinting backwards: \n";
    Node*tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
}
int main()
{
    //Node*head=NULL;
   // Node*tail=NULL;
    Node*head=new Node(10);
    Node*b=new Node(20);
    Node*c=new Node(30);
    Node*d=new Node(40);
    Node*tail=new Node(50);
    //Node*a=new Node(10);
    //head=a;
   // tail=e;
    head->next=b;
    b->prev=head;
    b->next=c;
    c->prev=b;
    c->next=d;
    d->prev=c;
    d->next=tail;
    tail->prev=d;
    print_forward(head);
    print_backward(tail);
    return 0;
}