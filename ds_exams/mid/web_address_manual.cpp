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
void print_forward(Node*head)
{
  //cout<<"L -> ";
  Node*tmp=head;
  while(tmp!=NULL)
    {
      cout<<tmp->s<<" ";
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
      string w;
      cin>>w;
      if(w=="end") break;
      insert_at_tail(head,tail,w);
    }
  int q;
  cin>>q;
  getchar();
  Node*tmp=head;
  for(int i=0;i<q;i++)
    {
      list<string>find;
      string wrd;
      while((cin>>wrd)!=EOF)
        {
          find.push_back(wrd);
        }
      string search;
      getline(cin,search);
      //cout<<search<<endl;
      stringstream ss(search);
      string word;
      string keyword;
      while(ss>>word)
        {
          keyword=word;
          //cout<<keyword<<endl;
        }

      if(keyword=="prev")
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
      else if(keyword=="next")
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
      else
      {
        Node*fix_tmp=tmp;
        while(tmp!=NULL)
          {
            if(tmp->s==keyword)
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
    }
  //print_forward(head);
  return 0;
}