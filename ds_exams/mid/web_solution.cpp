#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
string s;
Node*next;
Node*prev;
Node(string ad)
{
  s=ad;
  next=NULL;
  prev=NULL;
}
};
void insert_at_tail(Node*&head,Node*&tail,string sr)
{
  Node*newNode=new Node(sr);
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
int main()
{
  Node*head=NULL;
  Node*tail=NULL;
  while(true)
    {
      string w;
      cin>>w;
      if(w=="end") break;
      insert_at_tail(head,tail,w);
    }
  int q;
  cin>>q;
  //getchar();
  Node*cur=head;
  for(int i=0;i<q;i++)
    {
      //Node*tmp=head;
      string s;
      cin>>s;
      if(s=="visit")
      {
        string url;
        cin>>url;
        Node*tmp=head;
        int flag=0;
          while(tmp!=NULL)
            {
              if(tmp->s==url)
              {
                flag=1;
                //cout<<tmp->s<<endl;
                break;
              }
              tmp=tmp->next;
            }
          if(flag==1)
          {
            cout<<tmp->s<<endl;
            cur=tmp;
          }
          else{
            cout<<"Not Available"<<endl;
          }
        }
      else if(s=="prev")
      {
        if(cur==NULL||cur->prev==NULL)
          {
            cout<<"Not Available\n";
          }
          else{
            cur=cur->prev;
            cout<<cur->s<<endl;
          }
      }
      else if(s=="next")
        {
          if(cur==NULL||cur->next==NULL)
            {
              cout<<"Not Available\n";
            }
            else
            {
              cur=cur->next;
              cout<<cur->s<<endl;
            }
        }
    }
  return 0;
}