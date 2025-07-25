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
    cout<<endl;
}*/
int maxDepth(Node*root)
{
    if(root==NULL) return 0;
    int l=maxDepth(root->left);
    int r=maxDepth(root->right);
    return max(l,r)+1;
}
int count_Node(Node*root)
{
    if(root==NULL) return 0;
    int l=count_Node(root->left);
    int r=count_Node(root->right);
    return l+r+1;
}
int main()
{
    Node*root=btree_input();
    //level_order(root);
    int dep=maxDepth(root);
    //cout<<dep<<endl;
    int t_n=count_Node(root);
    //cout<<t_n<<endl;
    int p_n=pow(2,dep)-1;
    //cout<<p_n;
    if(t_n==p_n) cout<<"YES";
    else cout<<"NO";
    return 0;
}