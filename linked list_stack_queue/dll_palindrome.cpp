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
  Node*i=head;
  Node*j=tail;
  int flag=1;
  for(i=head,j=tail; (i!=j) && (i->next!=j); i=i->next,j=j->prev)
    {
      //cout<<i->val<<" "<<j->val<<endl;
      if(i->val!=j->val)
      {
        flag=0;
        break;
      }
    }
  if(flag==1)
  {
    //cout<<i->val<<" "<<j->val<<endl;
    if(i->val!=j->val) flag=0;
  }
  if(flag==0) cout<<"NO";
  else if(flag==1) cout<<"YES";
  return 0;
}