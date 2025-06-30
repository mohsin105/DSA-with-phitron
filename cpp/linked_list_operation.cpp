#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*next;
    Node(int val)
    {
        this->val=val;
        next=NULL;
    }
};
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
    tail=tail->next;
}
void insert_at_head(Node*&head,Node*&tail,int v)
{
    Node*newNode=new Node(v);
    if(head==NULL)
    {
        //newNode->next=head;
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
    /*if(head->next=NULL)
    {
        tail=head;
    }*/
}
void insert_at_position(Node*&head,Node*&tail,int pos,int val)
{
    cout<<endl<<"inserting at position "<<pos<<endl;
    Node*newNode=new Node(val);
    Node*tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<endl<<"invalid index"<<endl;
            return;
        }
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
void delete_from_head(Node*&head,Node*&tail)
{
    cout<<endl<<"delete from head\n";
    if(head==NULL)
    {
        cout<<"\ninvalid index\n";
        return;
    }
    Node*del=head;
    head=head->next;
    if(head==NULL)
    {
        tail=NULL;
    }
    delete del;
}
void delete_from_position(Node*&head,Node*&tail,int pos)
{
    cout<<"\ndelete from position "<<pos<<endl;
    Node*tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"\ninvalid index\n";
            return;
        }
    }
    if(tmp->next==NULL)
    {
        cout<<"\ninvalid index\n";
        return;
    }
    Node*del=tmp->next;
    //if(tmp->next->next)
    tmp->next=tmp->next->next;
    delete del;
}
void print_linked_list(Node*head)
{
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        insert_at_tail(head,tail,x);
    }
    print_linked_list(head);
    //insert at head 
    int h;
    cin>>h;
    insert_at_head(head,tail,h);
    print_linked_list(head);
    //insert at position
    int p,v;
    cin>>p>>v;
    insert_at_position(head,tail,p,v);
    print_linked_list(head);
    //delete from head
    delete_from_head(head,tail);
    print_linked_list(head);
    //delete from position and tail
    int po;
    cin>>po;
    delete_from_position(head,tail,po);
    print_linked_list(head);
    return 0;
}