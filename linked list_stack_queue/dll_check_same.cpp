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
  Node*head2=NULL;
  Node*tail2=NULL;
  while(true)
    {
      int v;
      cin>>v;
      if(v==-1)break;
      insert_at_tail(head2,tail2,v);
    }
  print_forward(head2);
  Node*tmp1=head;
  Node*tmp2=head2;
  int flag=1;
  while(tmp1!=NULL&&tmp2!=NULL)
    {
      cout<<tmp1->val<<" "<<tmp2->val<<endl;
      if(tmp1->val!=tmp2->val)
      {
        flag=0;
        break;
      }
      tmp1=tmp1->next;
      tmp2=tmp2->next;
    }
  if(flag==1)
  {
    if(tmp1==NULL &&tmp2==NULL) 
      {
        flag=1;
      }
      else 
      {
        flag=0;
      }
  }
  if(flag==1) cout<<"YES";
  else if(flag==0) cout<<"NO";
  
  return 0;
}