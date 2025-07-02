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
  tail=tail->next;
}
void print_forward(Node*head)
{
  Node*tmp=head;
  while(tmp!=NULL)
    {
      cout<<tmp->val<<" ";
      tmp=tmp->next;
    }
  cout<<endl;
}
void reverse_ll(Node*head,Node*tail)
{
  Node*i=head;
  Node*j=tail;
  while(i!=j &&i->next!=j)
    {
      swap(i->val,j->val);
      i=i->next;
      j=j->prev;
    }
  swap(i->val,j->val);
}

int main()
{
  Node*head=NULL;
  Node*tail=NULL;
  while(true)
    {
      int v;
      cin>>v;
      if(v==-1)break;
      insert_at_tail(head,tail,v);
    }
  print_forward(head);
  reverse_ll(head,tail);
  print_forward(head);
  return 0;
}