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
int main()
{
  Node*head=NULL;
  Node*tail=NULL;
  int mx=INT_MIN;
  while(true)
    {
      int v;
      cin>>v;
      if(v==-1)break;
      if(v>mx) mx=v;
      insert_at_tail(head,tail,v);
    }
  cout<<endl<<mx;
  return 0;
}