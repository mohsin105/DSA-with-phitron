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
/*void print_linked_list(Node*head)
{cout<<endl<<"the linked list: ";
  Node*tmp=head;
  while(tmp!=NULL)
    {
      cout<<tmp->val<<" ";
      tmp=tmp->next;
    }
 cout<<endl;
}*/
int main()
{
  Node*l1_h=NULL;
  Node*l1_t=NULL;
  Node*l2_h=NULL;
  Node*l2_t=NULL;
  while(true)
    {
      int v;
      cin>>v;
      if(v==-1) break;
      insert_at_tail(l1_h,l1_t,v);
    }
 // print_linked_list(l1_h);
  while(true)
    {
      int v;
      cin>>v;
      if(v==-1) break;
      insert_at_tail(l2_h,l2_t,v);
    }
  //print_linked_list(l2_h);
  Node*tmp1=l1_h;
  Node*tmp2=l2_h;
  int flag=1;
  while(true)
    {
      //cout<<tmp1->val<<" "<<tmp2->val<<endl;
      if(tmp1->val!=tmp2->val)
      {
        flag=0;
        break;
      }
      tmp1=tmp1->next;
      tmp2=tmp2->next;
      if((tmp1==NULL && tmp2!=NULL)||(tmp1!=NULL && tmp2==NULL))
      {
        flag=0;
        break;
      }
      else if(tmp1==NULL && tmp2==NULL) break;
    }
  if(flag==1) cout<<"YES";
  else if(flag==0) cout<<"NO";
  return 0;
}