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
  this->next=NULL;
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
void delete_node(Node*i,int x)
{
  Node*tmp=i;
  while(tmp->next!=NULL)
    {
      if(tmp->next->val==x)
      {
        Node*del=tmp->next;
        tmp->next=tmp->next->next;
        delete del;
      }
      tmp=tmp->next;
    }
}
void print_linked_list(Node*head)
{
  Node*tmp=head;
  while(tmp!=NULL)
    {
      cout<<tmp->val<<" ";
      tmp=tmp->next;
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
      else insert_at_tail(head,tail,v);
    }
  Node*tmp1=head;
  while(tmp1!=NULL)
    {
      Node*tmp2=tmp1;
      while(tmp2->next!=NULL)
        {
          if(tmp1->val==tmp2->next->val)
          {
            Node*del=tmp2->next;
            tmp2->next=tmp2->next->next;
            delete del;
          }
          else tmp2=tmp2->next;
        }
      tmp1=tmp1->next;
    }
  
  print_linked_list(head);
  return 0;
}