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
void insert_at_head(Node*&head,int val)
{
  Node*newNode=new Node(val);
  newNode->next=head;
  head=newNode;
}
void insert_at_tail(Node*&head,int val)
{
  Node*newNode=new Node(val);
  if(head==NULL)
  {
    head=newNode;
    //tail=newNode;
    return;
  }
  Node*tmp=head;
  while(tmp->next!=NULL)
    {
      tmp=tmp->next;
    }
  tmp->next=newNode;
}
void delete_from_position(Node*head,int pos)
{
  Node*tmp=head;
  for(int i=0;i<pos-1;i++)
    {
      tmp=tmp->next;
      if(tmp==NULL) return;
    }
  if(tmp->next==NULL) return;
  Node*del=tmp->next;
  tmp->next=tmp->next->next;
  delete del;
}
void delete_from_head(Node*&head)
{
  if(head==NULL) return;
  Node*del=head;
  head=head->next;
  delete del;
}
void print_linked_list(Node*head)
{
  Node*tmp=head;
  while(tmp!=NULL)
    {
      cout<<tmp->val<<" ";
      tmp=tmp->next;
    }
  cout<<endl;
}
int main()
{
  Node*head=NULL;
  //Node*tail=NULL;
  int q;
  cin>>q;
  for(int t=0;t<q;t++)
    {
      int x,v;
      cin>>x>>v;
      if(x==0) insert_at_head(head,v);
      if(x==1) insert_at_tail(head,v);
      if(x==2) 
      {
        if(v==0) delete_from_head(head);
        else delete_from_position(head,v);
      }
        
      print_linked_list(head);
    }
  return 0;
}