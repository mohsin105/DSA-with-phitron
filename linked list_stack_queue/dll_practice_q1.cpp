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
void print_linked_list(Node*head)
{
  cout<<"linked list is: ";
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
      if(v==-1) break;
      insert_at_tail(head,tail,v);
    }
  print_linked_list(head);
  Node*head1=NULL;
  Node*tail1=NULL;
  while(true)
    {
      int v;
      cin>>v;
      if(v==-1) break;
      insert_at_tail(head1,tail1,v);
    }
  print_linked_list(head1);
   Node*tmp=head;
   Node*tmp1=head1;
   int flag=1;
   while(true)
     {
       if(tmp->val!=tmp1->val)
       {
         flag=0;
         break;
       }
       else if(tmp==NULL)
       {
         if(tmp1==NULL)
         {
           flag=1;
           break;
         }
         else
         {
           flag=0;
           break;
         }
       }
       else if(tmp1==NULL)
       {
         if(tmp==NULL)
         {
           flag=1;
           break;
         }
         else
         {
           flag=0;
            break;
         }
       }
       tmp=tmp->next;
       tmp1=tmp1->next;
     }
  if(flag==0) cout<<"NO";
  else if(flag==1) cout<<"YES";
  return 0;
}