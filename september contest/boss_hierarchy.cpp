//covert the given array to BST
//print the BST in level order
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    long long int val;
    Node*left;
    Node*right;
    Node(long long int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* convert(long long int a[],int n,int l,int r)
{
    if(l>r) return NULL;
    int mid=(l+r)/2;
    //cout<<a[mid];
    Node*root=new Node(a[mid]);
    //cout<<root->val<<" ";
    Node*left=convert(a,n,l,mid-1);
    Node*right=convert(a,n,mid+1,r);
    root->left=left;
    root->right=right;
    return root;
}
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
    int n;
    cin>>n;
    int node=pow(2,n)-1;
    long long int emp[node];
    for(int i=0;i<node;i++)
    {
        cin>>emp[i];
    }
    //cout<<node<<endl;
    Node*root=convert(emp,node,0,node-1);
    level_order(root);
    return 0;
}