#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void level_order(Node*root)
{
    if(root==NULL)
    {
        cout<<"Empty tree";
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        //extracting and separatly storing the front
        Node*tmp=q.front();
        q.pop();
        //s-2: task with tmp node
        cout<<tmp->val<<" ";
        //s-3:pushing the child of tmp into the queue
        if(tmp->left!=NULL)
        {
            q.push(tmp->left);
        }
        if(tmp->right!=NULL)
        {
            q.push(tmp->right);
        }

    }
}
int main()
{
    Node*root=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);
    Node*c=new Node(40);
    Node*d=new Node(50);
    Node*e=new Node(60);
    Node*f=new Node(70);
    Node*g=new Node(80);
    Node*h=new Node(90);
    Node*i=new Node(100);
    root->left=a;
    root->right=b;
    a->left=c;
    a->right=h;
    b->right=d;
    c->right=e;
    h->right=i;
    d->left=f;
    d->right=g;
    level_order(root);
    return 0;
}