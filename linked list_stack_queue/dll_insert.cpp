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
int size_dll(Node*head)
{
  Node*tmp=head;
  int sz=0;
  while(tmp!=NULL)
    {
      sz++;
      tmp=tmp->next;
    }
  return sz;
}
void insert_at_position(Node*&head,Node*&tail,int pos,int val)
{
  Node*newNode=new Node(val);
  if(pos==0)
  {
    if(head==NULL)
    {
      head=newNode;
      tail=newNode;
      return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
    return;
  }
  else if(pos==size_dll(head))
  {
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
    return;
  }
  Node*tmp=head;
  for(int i=0;i<pos-1;i++)
    {
      tmp=tmp->next;
    }
  newNode->next=tmp->next;
  tmp->next=newNode;
  newNode->prev=tmp;
  newNode->next->prev=newNode;
  
}
void print_forward(Node*head)
{
  cout<<"L -> ";
  Node*tmp=head;
  while(tmp!=NULL)
    {
      cout<<tmp->val<<" ";
      tmp=tmp->next;
    }
  cout<<endl;
}
void print_backward(Node*tail)
{
  Node*tmp=tail;
  cout<<"R -> ";
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
  int q;
  cin>>q;
  for(int i=0;i<q;i++)
    {
      int x,v;
      cin>>x>>v;
      if(x>size_dll(head))
      {
        cout<<"Invalid\n";
        continue;
      }
      insert_at_position(head,tail,x,v);
      print_forward(head);
      print_backward(tail);
    }
  return 0;
}