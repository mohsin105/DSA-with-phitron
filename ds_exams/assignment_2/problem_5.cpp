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
void delete_from_position(Node*head,int pos)
{
  Node*tmp=head;
  for(int i=0;i<pos-1;i++)
    {
      tmp=tmp->next;
    }
  Node*del=tmp->next;
  tmp->next=tmp->next->next;
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
  int pos[1000]={0};
  int i_indx=0;
  for(Node*i=head;i!=NULL;i=i->next)
    {
      //cout<<i_indx<<" ";
      int indx=i_indx+1;
      for(Node*j=i->next;j!=NULL;j=j->next)
        {
          //cout<<indx<<endl;
          cout<<i->val<<" "<<j->val<<" ";
          if(i->val==j->val)
          {
            cout<<"index position "<<indx<<endl;
            pos[indx]++;
          } 
          cout<<endl;
          indx++;
        }
      cout<<endl;
      i_indx++;
    }
  
  for(int i=30-1;i>=0;i--)
    {
      cout<<pos[i]<<" ";
      if(pos[i]>0)
      {
        delete_from_position(head,i);
        cout<<endl;
        //print_linked_list(head);
        cout<<endl;
        /*Node*tmp=head;
        for(int j=0;j<i-1;j++)
          {
            tmp=tmp->next;
          }
        Node*del=tmp->next;
        tmp->next=tmp->next->next;
        delete del;*/
      }
    }
  print_linked_list(head);
    
  return 0;
}