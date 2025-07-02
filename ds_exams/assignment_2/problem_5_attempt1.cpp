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
  Node*tmp=head;
  while(tmp!=NULL)
    {
      cout<<tmp->val<<" ";
      tmp=tmp->next;
    }
}
/*void delete_duplicate(Node*head)
{
  int i_pos=0;
  for(Node*i=head;i!=NULL;i=i->next)
    {
      int j_pos=1;
      Node*tmp=i;
      for(Node*j=i->next;j!=NULL;j=j->next)
        {
          if(i->val!=j->val) tmp=tmp->next;
          else if(i->val==j->val)
          {
            Node*tmp=i;
            for(int d=1;d<=j_pos-1;d++)
              {
                tmp=tmp->next;
              }
            Node*del=tmp->next;
            tmp->next=tmp->next->next;
            delete del;
          }
          j_pos++;
        }
      i_pos++;
    }
}*/
/*void delete_node(Node*i,int val)
{
  Node*tmp=i;
  while(tmp->next!=NULL)
    {
      if(tmp->next->val==val)
      {
        Node*del=tmp->next;
        tmp->next=tmp->next->next;
        delete del;
      }
      tmp=tmp->next;
    }
}*/
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
  for(Node*i=head;i!=NULL;i++)
    {
      for(Node*j=i->next;j!=NULL;j=j->next)
        {
          if(i->val==j->val) delete_node(i->next,i->val);
        }
    }
 // delete_duplicate(head);
  print_linked_list(head);
  return 0;
}