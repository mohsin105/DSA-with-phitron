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
int size_dll(Node*head)
{
  Node*tmp=head;
  int sz=0;
  while(tmp!=NULL)
    {
      sz++;
      tmp=tmp->next;
    }
  return sz;
}
int main()
{
  Node*head=NULL;
  Node*tail=NULL;
  int q;
  cin>>q;
  while(q>0)
    {
      int x,v;
      cin>>x>>v;
      
      q--;
    }
  return 0;
}