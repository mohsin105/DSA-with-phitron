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
Node* btree_input()
{
    int val;
    cin>>val;
    Node*root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root!=NULL) q.push(root);
    while(!q.empty())
    {
        //separately storing and popping the front of queue
        Node*tmp=q.front();
        q.pop();
        //task: taking two inputs, creating nodes, connecting with tmp as its children
        int l,r;
        cin>>l>>r;
        Node*left;
        Node*right;
        if(l==-1) left=NULL;
        else left=new Node(l);
        if(r==-1) right=NULL;
        else right=new Node(r);
        tmp->left=left;
        tmp->right=right;
        //pushing children of tmp into the queue
        if(tmp->left!=NULL) q.push(tmp->left);
        if(tmp->right!=NULL) q.push(tmp->right);
    }
    return root;
}
/*
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
}*/
vector<int>v;
void print_leaf(Node*root)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL)
    {
        v.push_back(root->val);
        //cout<<root->val<<" ";
        return;
    }
    print_leaf(root->left);
    print_leaf(root->right);
    
}
int main()
{
    v.clear();
    Node*root=btree_input();
    //level_order(root);
    print_leaf(root);
    /*reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }*/
    while(!v.empty())
    {
     cout<<v.back()<<" ";
     v.pop_back();
    }
    return 0;
}