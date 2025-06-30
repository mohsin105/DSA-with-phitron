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
void insert_at_tail(Node*&head,Node*&tail,int v)
{
    Node *newNode=new Node(v);
    if(head==NULL)//meaning list is currently empty
    {
        tail=newNode;
        head=newNode;
        //without this line, head remains NULL
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void insert_at_head(Node*&head,Node*&tail,int v)
{
    cout<<"\ninserting at head "<<v<<endl;
    Node*newNode=new Node(v);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
    cout<<"inserted at head";
}
void insert_at_position(Node*&head,Node*&tail,int pos, int v)
{
    cout<<"\ninserting at position: "<<pos<<endl;
    if(pos==0) 
    {
        insert_at_head(head,tail,v);
        return;
    }
    Node*newNode=new Node(v);
    Node*tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)//tmp nijei NULL hoye gese. er porer ->next access korte parbe na
        {
            cout<<"\nInvalid index\n";
            return;
        }
    }
    //tmp is at 1 position previous
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<"insertion done\n";
}
void delete_head(Node*&head)
{
    cout<<"\ndeleting head\n";
    if(head==NULL)
    {
        cout<<"head is not available, there is no head\n";
        return;
    }
    Node*del=head;
    head=head->next;
    delete del;
    cout<<"\nhead deleted\n";
}
void delete_from_position(Node*&head,Node*&tail,int pos)
{
    cout<<"\ndeleting from position: "<<pos<<endl;
    Node*tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"Invalid Index\n";
            return;
        }
    }
    //tmp is now at one position previous of the target position
    //tmp->next is to be deleted
    if(tmp->next==NULL)
    {
        cout<<"Invalid Index\n";
        return;
    }
    Node*del=tmp->next;
    tmp->next=tmp->next->next;
    delete del;
    cout<<"deleted from position\n";
}
void print_linked_list(Node*head)
{
    cout<<"\nprint start:\n";
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<"\nprint end\n";
}
int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    //head deleting corner case error handling
    delete_head(head);
    int q; //3
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x; //10 20 30 in separate line
        insert_at_tail(head,tail,x);
    }
    print_linked_list(head);
    int hd; //5
    cin>>hd;
    insert_at_head(head,tail,hd);
    print_linked_list(head);

    //single insert at tail
    insert_at_tail(head,tail,40);
    print_linked_list(head);

    //single insert at position
    insert_at_position(head,tail,3,25);
    print_linked_list(head);

    //with the insert-position(), you can insert in position as long as 
    //the position is small or equal to the size of current list
    //insert-position code diye tail(meaning pos==size) eo insert kora jay
    //but in that process, tail node update hobe na. 
    insert_at_position(head,tail,6,50); 
    print_linked_list(head);

    cout<<"tail node: "<<tail->val<<endl;//tail remains same as before
    //for position being which is greater then the size of current list
    //you have to do error handling in insert-position()
    //also, if position is 0, means insert at head. normal insert-position()code would not work
    insert_at_position(head,tail,8,70);
    insert_at_position(head,tail,0,4);
    print_linked_list(head);

    insert_at_tail(head,tail,60);
    print_linked_list(head);//this will give wrong answer. 
    //as 40 node remains tail node, insert_tail connects the 60 node
    //at the 40->next. and 60->next is by default NULL,
    //so 50 is removed from the list. 

    delete_head(head);
    print_linked_list(head);

    delete_from_position(head,tail,3);
    print_linked_list(head);

    delete_from_position(head,tail,6);
    print_linked_list(head);


    return 0;
}