#include<bits/stdc++.h>
using namespace std;
class b_node
{
    public:
    int val;
    b_node*left;
    b_node*right;
    b_node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
b_node* level_input()
{
    int r;
    cin>>r;
    b_node*root;
    if(r==-1)root=NULL;
    else root=new b_node(r);
    queue<b_node*>q;
    if(root!=NULL) q.push(root);
    while(!q.empty())
    {
        b_node*tmp=q.front();
        q.pop();
        //task
        int l,r;
        cin>>l>>r;
        b_node*left;
        b_node*right;
        if(l==-1) left=NULL;
        else left=new b_node(l);
        if(r==-1) right=NULL;
        else right=new b_node(r);
        tmp->left=left;
        tmp->right=right;
        //children
        if(left!=NULL) q.push(tmp->left);
        if(right!=NULL) q.push(tmp->right);
    }
    return root;
}
void level_print(b_node*root)
{
    if(root==NULL) return;
    queue<b_node*>q;
    q.push(root);
    while(!q.empty())
    {
        b_node*tmp=q.front();
        q.pop();
        //task
        cout<<tmp->val<<" ";
        //children
        if(tmp->left!=NULL) q.push(tmp->left);
        if(tmp->right!=NULL) q.push(tmp->right);
    }
    cout<<endl;
}
bool search(b_node*root,int x)
{
    if(root==NULL) return false;
    if(root->val==x) return true;
    if(x<root->val)
    {
        return search(root->left,x);
    }
    else 
    {
        return search(root->right,x);
    }
}
int main()
{
    b_node*root=level_input();
    level_print(root);
    bool find=search(root,5);
    if(find==true) cout<<"\nfound\n";
    else cout<<"\nnot found\n";
    return 0;
}