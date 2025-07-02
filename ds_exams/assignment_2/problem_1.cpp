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
int main()
{
  Node*head=NULL;
  Node*tail=NULL;
  Node*mn=new Node(INT_MAX);
  Node*mx=new Node(INT_MIN);
  while(true)
    {
      int v;
      cin>>v;
      if(v==-1)break;
      insert_at_tail(head,tail,v);
    }
  Node*tmp=head;
  while(tmp!=NULL)
    {
      if(tmp->val<mn->val) *mn=*tmp;
      if(tmp->val>mx->val) *mx=*tmp;
      tmp=tmp->next;
    }
  int diff=mx->val-mn->val;
  cout<<diff;
  return 0;
}