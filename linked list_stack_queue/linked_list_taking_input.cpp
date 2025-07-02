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
void insert_at_tail(Node*&head,int val)
{
  Node*newNode=new Node(val);
  if(head==NULL)
  {
    head=newNode;
    return;
  }
  Node*tmp=head;
  while(tmp->next!=NULL)
    {
      tmp=tmp->next;
    }
  tmp->next=newNode; 
}
void insert_at_head(Node*&head,int val)
{
  Node*newNode=new Node(val);
  newNode->next=head;
  head=newNode;
  cout<<endl<<"inserted at head"<<endl;
}
void insert_at_position(Node*head,int val,int pos)
{
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
  int sz=0;
  cout<<"enter values of linked list: ";
  while(true)
    {
      int v;
      cin>>v;
      if(v==-1) break;
      sz++;
      insert_at_tail(head,v);
    }
  cout<<endl;
  print_linked_list(head);
  cout<<endl;
  int q;
  cin>>q;
  while(q>0)
    {
      int v,pos;
      cout<<"enter a value and position: ";
      cin>>v>>pos;
      if(pos==0) insert_at_head(head,v);
      else
      {
        insert_at_position(head,v,pos);
      }
      q--;
    }
  cout<<endl<<"the linked list is: ";
  print_linked_list(head);
  cout<<endl;
  return 0;
}