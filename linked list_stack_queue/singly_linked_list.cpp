#include<bits/stdc++.h>
using namespace std;
//declaring node class for singly linked list
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
int main()
{
    Node*a=new Node(10);
    Node*b=new Node(20);
    Node*c=new Node(30);
    cout<<(*a).val<<endl;//here, a is pointer of the node with value 10
    //so by dereferencing a, we can access its elements
    //another way of dereferencing 
    cout<<a->val<<endl;
    //this following line will give error, as it means dereferencing a.val, not just a
    //cout<<*a.val<<endl;

    //so, to manually connect the node
    (*a).next=b;//b itself is the pointer, no need to use & sign
    (*b).next=c;
    (*c).next=NULL;
    cout<<b->val<<endl;
    cout<<c->val<<endl;

    //checking the connection
    cout<<a->next->val<<endl;
    cout<<b->next->val<<endl;
    //printing using a loop
    Node*tmp=a;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<endl;
        cout<<(*tmp).val<<endl;
        tmp=tmp->next;
    }
    return 0;
}