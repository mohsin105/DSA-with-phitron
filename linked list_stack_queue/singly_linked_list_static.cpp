#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*next;
};
int main()
{
    Node a,b,c;
    a.val=10;
    b.val=20;
    c.val=30;
    a.next=&b;  //b is a static node, so address of b node is &b
    b.next=&c;
    c.next=NULL;
    cout<<a.val<<endl;
    cout<<b.val<<endl;
    cout<<c.val<<endl;
    
    //a.next is a pointer whose value is &b, 
    //so by derefencing a.next we can access b's value
    cout<<a.next->val<<endl;
    cout<<b.next->val<<endl;
    //another way of dereferencing a.next
    cout<<(*a.next).val<<endl;
    //following line will show segmentation fault because c.next is NULL and NULL has no value
    //cout<<c.next->val<<endl;


    cout<<"printing static linked list using loop\n";
    Node*tmp=&a;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
    return 0;
}


//declaring linked list node with constructor function 
/*
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
*/
//creating static object inside main () using constructor function 
/*
    Node a(10);
    Node b(20);
    Node c(30);
*/
//rest of process is same