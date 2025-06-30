/*input txt
6
5 15 25 35 45 55
2
10 0
0
*/
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
void insert_at_head(Node*&head,Node*&tail,int v)
{
    cout<<"\ninserting at head\n";
    Node*newNode=new Node(v);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void insert_at_tail(Node*&head,Node*&tail,int v)
{
    Node*newNode=new Node(v);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void insert_at_position(Node*&head,Node*&tail,int v,int pos)
{
    
    if(pos==0)
    {
        insert_at_head(head,tail,v);
        return;
    }
    //if (pos==size) insert_at_tail(head,tail,v);
    //if(pos>size) cout<<"\ninvalid index\n";
    Node*newNode=new Node(v);
    Node*tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=tmp;
}
void delete_head(Node*&head,Node*&tail)
{
    cout<<"\ndelete from head \n";

    Node*del=head;
    if(head->next==NULL)
    {
        delete del;
        return;
    }
    head->next->prev=NULL;
    head=head->next;
    delete del;
}
void delete_tail(Node*&tail)
{
    cout<<"\ndelete tail\n";
    Node*del=tail;
    if(tail->prev==NULL)
    {
        delete del;
        return;
    }
    tail->prev->next=NULL;
    tail=tail->prev;
    delete del;
}
void delete_from_position(Node*&head,Node*&tail,int pos)
{
    cout<<"\ndelete from position "<<pos<<endl;
    if(pos==0)
    {
        delete_head(head,tail);
        return;
    }
    //if(pos>=size) cout<<"invalid index";
    //if(pos==size-1) delete_from_tail
    Node*tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node*del=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete del;
}
void print_forward(Node*head)
{
    cout<<"\nprinting forward\n";
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void print_backward(Node*tail)
{
    cout<<"\nprinting backward \n";
    Node*tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        insert_at_tail(head,tail,x);
    }
    print_forward(head);
    print_backward(tail);
    //inserting at head
    int h;
    cin>>h;
    insert_at_head(head,tail,h);
    print_forward(head);
    print_backward(tail);
    //inserting at position
    int v,pos;
    cin>>v>>pos;
    insert_at_position(head,tail,v,pos);
    print_forward(head);
    print_backward(tail);
    //delete from position
    int d;
    cin>>d;
    delete_from_position(head,tail,d);
    print_forward(head);
    print_backward(tail);
    //delete from head
    delete_head(head,tail);
    print_forward(head);
    print_backward(tail);
    //delete_tail
    delete_tail(tail);
    print_forward(head);
    print_backward(tail);
    return 0;
}