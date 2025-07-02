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
  Node*tmp=head;
  for(int i=0;i<q;i++)
    {
      //Node*tmp=head;
      string s;
      cin>>s;
      if(s=="visit")
      {
        string url;
        cin>>url;
        Node*fix_tmp=tmp;
          while(tmp!=NULL)
            {
              if(tmp->s==url)
              {
                cout<<tmp->s<<endl;
                break;
              }
              tmp=tmp->next;
            }
          if(tmp==NULL)
          {
            tmp=fix_tmp;
            cout<<"Not Available\n";
          }
        }
      else if(s=="next")
      {
        if(tmp->next==NULL)
          {
            cout<<"Not Available\n";
          }
          else
          {
            tmp=tmp->next;
            cout<<tmp->s<<endl;
          }
      }
      else if(s=="prev")
      {
        if(tmp->prev==NULL)
          {
            cout<<"Not Available\n";
          }
          else{
            tmp=tmp->prev;
            cout<<tmp->s<<endl;
          }
      }
    }
  return 0;
}