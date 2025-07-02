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
void print_reverse(Node*r)
{
  if(r==NULL) return;
  print_reverse(r->next);
  cout<<r->val<<" ";
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
  cout<<endl<<"linked list in reverse order: ";
  print_reverse(head);
  return 0;
}