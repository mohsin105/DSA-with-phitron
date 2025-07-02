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
  tail=newNode;
}
void print_linked_list(Node*head)
{
  cout<<endl;
  for(Node*tmp=head;tmp!=NULL;tmp=tmp->next)
    {
      cout<<tmp->val<<" ";
    }
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
  for(Node*i=head;i!=NULL;i=i->next)
    {
      for(Node*j=i->next;j!=NULL;j=j->next)
        {
          if(i->val<j->val) swap(i->val,j->val);
        }
    }
  print_linked_list(head);
  return 0;
}