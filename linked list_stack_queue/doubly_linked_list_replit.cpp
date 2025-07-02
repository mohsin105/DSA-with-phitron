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
int sz_linked_list(Node*head)
{
  Node*trav=head;
  int sz=0;
  while(trav!=NULL)
    {
      sz++;
      trav=trav->next;
    }
  return sz;
}
void print_forward(Node*head)
{
  Node*trav=head;
  while(trav!=NULL)
    {
      cout<<trav->val<<" ";
      trav=trav->next;
    }
  cout<<endl;
}
void print_backward(Node*tail)
{
  Node*trav=tail;
  while(trav!=NULL)
  {
    cout<<trav->val<<" ";
    trav=trav->prev;
  }
  cout<<endl;
}
void insert_at_tail(Node*&head,Node*&tail,int val)
{
  Node*newNode=new Node(val);
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
void insert_at_head(Node*&head,int val)
{
  Node*newNode=new Node(val);
  newNode->next=head;
  head->prev=newNode;
  head=newNode;
}
void insert_at_position(Node*&head,Node*&tail,int pos,int val)
{
  if(pos>=sz_linked_list(head))//this functon needs to be declared on top.
  {
    /*if(pos==sz_linked_list(head))
    {
      insert_at_tail(head,tail,val);
    }
    else
    {
      cout<<"invalid index"<<endl;
    }*/
    cout<<"invalid index\n";
    return;
  }
  Node*newNode=new Node(val);
  Node*trav=head;
  for(int i=0;i<pos-1;i++)
    {
      trav=trav->next;
      /*if(trav->next==NULL)
      {
        cout<<"invalid\n";
        return;
      }*/
    }
  newNode->next=trav->next;
  trav->next=newNode;
  newNode->next->prev=newNode;//doesnt work when inserting at tail. 
  newNode->prev=trav;
}
void delete_head(Node*&head,Node*&tail)
{
  if(head==NULL)
  {
    cout<<"invalid index\n";
    return;
  }
  Node*del=head;
  head=head->next;
  if(head==NULL)
  {
    tail=NULL;
    return;
  }
  head->prev=NULL;
  delete del;
}
void delete_tail(Node*&head,Node*&tail)
{
  Node*del=tail;
  tail=tail->prev;
  if(tail==NULL)
  {
    head=NULL;
    return;
  }
  tail->next=NULL;
  delete del;
}
void delete_from_position(Node*head,int pos)
{
  if(pos>=sz_linked_list(head)-1)
  {
    cout<<"invalid index\n";
    return;
  }
  Node*trav=head;
  for(int i=0;i<pos-1;i++)
    {
      trav=trav->next;
    }
  Node*del=trav->next;
  trav->next=trav->next->next;
  trav->next->prev=trav;
  delete del;
}
int main()
{
  Node*head=NULL;
  Node*tail=NULL;
  head=new Node(10);
  Node*a=new Node(20);
  Node*b=new Node(30);
  Node*c=new Node(40);
  Node*d=new Node(50);
  head->next=a;
  a->prev=head;
  a->next=b;
  b->prev=a;
  b->next=c;
  c->prev=b;
  c->next=d;
  d->prev=c;
  tail=d;
  //insert_at_tail(head,tail,60);
  //insert_at_head(head,5);
  //insert_at_position(head,tail,5,60);
  //delete_head(head);
  cout<<sz_linked_list(head)<<endl;
  //delete_tail(tail);
  delete_from_position(head,4);
  print_forward(head);
  print_backward(tail);
  return 0;
}