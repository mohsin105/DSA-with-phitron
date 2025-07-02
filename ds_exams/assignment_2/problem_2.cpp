#include<bits/stdc++.h>
using namespace std;
class Node{
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
  
  int T;
  cin>>T;
  for(int t=0;t<T;t++)
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
        int x;
        cin>>x;
        Node*tmp=head;
        int i=0;
        while(tmp!=NULL)
          {
            if(tmp->val==x) 
            {cout<<i<<endl;
             break;
            }
            tmp=tmp->next;
            i++;
          }
        if(tmp==NULL) cout<<-1<<endl;
    }
  
  return 0;
}