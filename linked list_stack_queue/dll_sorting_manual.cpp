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
  tail=newNode;
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
void print_backward(Node*tail)
{
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
  while(true)
    {
      int v;
      cin>>v;
      if(v==-1) break;
      insert_at_tail(head,tail,v);
    }
  print_forward(head);
  print_backward(tail);
  for(Node*i=head;i!=NULL;i=i->next)
    {
      for(Node*j=i->next;j!=NULL;j=j->next)
        {
          if(i->val>j->val) swap(i->val,j->val);
        }
    }
  print_forward(head);
  
  return 0;
}